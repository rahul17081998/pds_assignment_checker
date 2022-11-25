/*
Name: Ranjim Prabal Das
Roll no: 21CS10054
Assignment 7
Question 1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
--- MAP ---
List of index values and corresponding ASCII for hash map:
0 - 97 - a
1 - 98 - b
2 - 99 - c
...
24 - 121 - y
25 - 122 - z

Map relation: index = ASCII - 97
*/

int HM[26]; // Substitution Table aka hash_map

// FUNCTIONS --------------

void create_hash_map(char []);
void print_decoded_message(char []);

// MAIN -------------------

int main(void)
{
	int i;
	
	printf("\n");
	
	// Reading key from the user
	printf("Enter key: ");
	char key[100];
	i = 0; scanf("%c", &key[i]); i++;
	while(key[i-1]!='\n'){
		scanf("%c", &key[i]);
		i++;
	}
	
	// Reading message from the user
	printf("Enter message: ");
	char msg[100];
	i = 0; scanf("%c", &msg[i]); i++;
	while(msg[i-1]!='\n'){
		scanf("%c", &msg[i]);
		i++;
	}
	
	create_hash_map(key); // Creating a hash map
	
	// Decoding the message
	char decMsg[100]; // String of decoded message
	for(i=0; msg[i]!='\n'; ++i){
		int ASCII = (int)msg[i];
		
		if(ASCII<97 || ASCII>122) decMsg[i] = (char)ASCII;
		else{
			int translated_ASCII = HM[ASCII-97];
			decMsg[i] = (char)translated_ASCII;
		}
	}
	decMsg[i] = '\n';
	
	// Printing the decoded message
	print_decoded_message(decMsg);
	
	printf("\n\n");
	
	return 0;
}

// FUNCTION DESCRIPTIONS ------

void create_hash_map(char *key) // function to create a hash_map reference for decoding
{
	/*
	Creating a hash map - HM (HM is already declared globally)
	This hash map is initialized to 0. The index and ASCII relation is same as map, i.e, index = ASCII - 97
	When a letter is encountered in key, we give the translated ASCII value in sequential order to that index.
	For example: 'the'
	ASCII('t')-97 = ASCII('a')
	ASCII('h')-97 = ASCII('b')
	ASCII('e')-97 = ASCII('c') ... and so on upto ASCII('z')
	and if letter is already assigned ASCII then we ignore it.
	*/
	
	int i;
	
	for(i=0; i<26; ++i) HM[i] = 0; // initialising to 0
	
	int k=97; // 'k' is the sequential ASCII to be stored in HM (hash map)
	for(i=0; key[i] != '\n'; ++i){
		int ASCII = (int)key[i]; // ASCII of the character in key[i]
		
		if(ASCII<97 || ASCII>122) continue; // omitting other characters
		else if(HM[ASCII-97] == 0){ // condition to check whether letter is assigned code or not
			HM[ASCII-97] = k; // marking the code for particular letter
			k++; // incrementing the sequence
		}
	}
}

void print_decoded_message(char *decMsg) // function to print the decoded message
{
	printf("Decoded Message: ");
	int i;
	for(i=0; decMsg[i]!='\n'; ++i){
		printf("%c", decMsg[i]);
	}
}
