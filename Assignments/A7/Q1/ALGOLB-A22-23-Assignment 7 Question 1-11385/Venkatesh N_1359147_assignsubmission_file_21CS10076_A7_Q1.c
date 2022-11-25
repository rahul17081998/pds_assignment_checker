#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX_LEN_KEY 50
#define MAX_LEN_MESSAGE 100


/* Name:Venkatesh Naresh
   Roll Number:21CS10076
   System Number: 71
*/


typedef struct HashNode{
	char key;
	char deciphered_key;
}HashNode;

typedef struct HashTable{
	HashNode *array;
	int size;
}HashTable;



HashTable * createTable(char * keystr);
char * decodedString(HashTable * hptr, char * message);
int hashValue(char c);
void getString(char * str);



int main(){

	printf("Enter the key:");
	char keystr[MAX_LEN_KEY];
	getString(keystr);

	HashTable * hptr = createTable(keystr);

	printf("Enter the encrypted message:");
	char message[MAX_LEN_MESSAGE];
	getString(message);

	char * decoded_message = decodedString(hptr,message);
	printf("\nDecoded message:%s\n",decoded_message);

	return 0;

}


HashTable* createTable(char * keystr){

	HashTable * hptr = (HashTable*)malloc(sizeof(HashTable));

	hptr->array = (HashNode*)malloc(27*sizeof(HashNode));
	hptr->size = 27;

	int j=0;

	for(int i=0;keystr[i]!=0;i++){

		int index = hashValue(keystr[i]);


		hptr->array[index].key = keystr[i];

		if(keystr[i]!=' '){
		hptr->array[index].deciphered_key = 'a'+j;
		j++;

		}

		else j = j + 2;

	}

	hptr->array[hashValue(' ')].deciphered_key = ' ';

	return hptr;

}


int hashValue(char c){
	if(c==' ')return 26;
	else return c-'a';
}

char * decodedString(HashTable * hptr, char * message){

	char * decoded_message = (char*)malloc(strlen(message)*sizeof(char));
	int i;

	for(i=0;message[i]!=0;i++){
		int index = hashValue(message[i]);
		decoded_message[i]=hptr->array[index].deciphered_key;

	}

	decoded_message[i]=0;
	return decoded_message;


}

void getString(char * str){

	char c;
	int i=0;
	while((c=getchar()) != '\n') str[i++] = c;
	str[i]=0;


}

