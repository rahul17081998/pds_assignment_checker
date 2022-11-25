#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//the hash function which gives key values to the respective letters of the input key
int hash(char K[],char x,int k){
	for(int i=0;i<k;i++){
		if(x==K[i]){
			return i;
		}
	}
}


//MAIN PROGRAM
//HERE WE ASSIGN HASH VCALUES TO EACGH LETTER OF THE KEY
//THEN WE CHECK THE POSITION OF THE LETTER ATTHE HASH VALUE OF MAI  ALPHABETICAL OREDR
//THEN WE PRINT THE LETTER AT THAT ALPHABETICAL POSITION
int main(){
	//DECLARING IMPORTANT VARIABLES
	int i,j,k;
	char key[100],M[100],K[26];
	//input of key
	printf("key : ");
	fgets(key,100,stdin);
	//input of message
	printf("message : ");
	fgets(M,100,stdin);
	
	//the alphabetical oredr and the array to store it
	char A[]="abcdefghijklmnopqrstuvwxyz";
	

	//here we try to condense the key to a more shorter form with no repitions of the letters
	k=0;
	for(i=0;key[i]!=' ';i++){
		if(key[i]!='\0'){
			int temp=0;
			for(j=0;j<i;j++){
				if(key[i]==key[j]){
					temp=1;
					break;
				}
			}
			if(temp==0){
				K[k]=key[i];
				
				k++;	
			}
		}
		if(key[i]=='\0'){
			break;
		}
	}

	//here we decode the message using the hash function on the message
	int l=strlen(M);
	printf("Output : ");
	for(i=0;i<l;i++){
		if(M[i]=='\0'){
			break;
		}
		else if(M[i]!=' '){
			printf("%c",A[hash(K,M[i],k)]);
		}
		else if(M[i]==' '){
			printf(" ");
		}
	}
	return 0;
}


