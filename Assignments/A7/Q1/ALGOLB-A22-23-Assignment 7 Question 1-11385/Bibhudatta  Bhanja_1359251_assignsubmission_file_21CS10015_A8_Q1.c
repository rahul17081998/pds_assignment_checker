//Bibhudatta Bhanja
//21CS10015


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SIZE 27

int hashTable[SIZE];//hash table creation

void initialize(){//initializing the hash table
	int i;
	for(i=0; i<SIZE; i++){
		hashTable[i] = 0;
	}
}

void decode(char key[]){//decoding the key and filling the entries in the hash table
	int i;
	hashTable[0] = -1;

	int len = strlen(key);
    int k = 1;
    
	for(i=0; i<len; i++){
		if(key[i]!=' '){
			int hashindex = key[i]-'a'+1;//checks if hash index already has a value other than 0 and then adds the value of the actual english alphabet to the index of the coded english alphabet
			if(hashTable[hashindex]==0){
				hashTable[hashindex] = k;
				k++;
				k%=SIZE;
			}else{

			}
		}
	}

}


char *decode_message(char message[]){//decoding the encrypted message
	int i;
	int len = strlen(message);
	char *decoded = (char *)malloc(len*sizeof(char));


	for(i=0; i<len-1; i++){
		if(message[i]==' '){
			decoded[i] = message[i];
		}else{
			int hashindex = message[i]-'a'+1;
			decoded[i] = 'a'+hashTable[hashindex]-1;//checking for corresponding english character
		}
	}

	return decoded;

}



int main(){//main driver function
	char key[1000];
	char message[1000];
	initialize();
	printf("Enter key: ");
	fgets(key,999,stdin);
	printf("\n");
	decode(key);

	printf("Enter message: ");
	fgets(message,999,stdin);
	printf("message is: %s\n",message);
	int len = strlen(message);
	char *dmess = (char *)malloc(len*sizeof(char));
	dmess = decode_message(message);
	printf("Decoded message: %s",dmess);
	printf("\n");
	
	

	return 0;
}