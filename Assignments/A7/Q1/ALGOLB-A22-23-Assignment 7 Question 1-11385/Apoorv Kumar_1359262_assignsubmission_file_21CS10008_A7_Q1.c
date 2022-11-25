/*
Name: Apoorv Kumar
Roll number: 21CS10008
Department: Computer Science and Engineering
Machine number: 37
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	int i,j; //loop variables
	char c; //temporary char variable
	size_t max_size = 100; //maximum size of the strings

	char hash_table[26]; //the hash table, wherein hash_table[int(i)]='c' means that char('a'+i) is to be substituted with 'c' to decode the message
	//initializing the hash_table with a non-alphabet character '0'
	for(i=0; i<26; i++){
		hash_table[i]='0';
	}

	char *key = (char*)malloc(max_size*sizeof(char)); //the string 'key'
	char *message = (char*)malloc(max_size*sizeof(char)); //the string 'message'


	printf("Enter the key: ");
	getline(&key,&max_size,stdin); //inputting key

	printf("Enter the message: "); 
	getline(&message,&max_size,stdin); //inputting message

	//FILLING UP THE HASH TABLE
	int hash_count=0; //to keep a count of the alphabets decoded
	for(i=0; (i<strlen(key) && hash_count<26); i++){
		c = key[i];
		
		if(c==' ') continue; //neglect the spaces
		if(hash_table[c-'a']!='0') continue; //if the character is already decoded, then ignore

		hash_table[c-'a'] = 'a'+hash_count;
		hash_count++;
	}

	printf("\nDecoded message: ");
	//DECODING THE MESSAGE
	for(i=0; i<strlen(message)-1; i++){
		c = message[i];

		if(c==' ') printf(" ");
		else printf("%c",hash_table[c-'a']); //picking up the corresponding decoded alphabet from the hash table
	}
	printf("\n");
	 
	return 0;
}
