/***
Name:
Roll No.: 21CS10064
Dept.:Computer Science and Engineering
System No.: 65
***/
#include <stdio.h>
#include <stdlib.h>

void createTable(char *key, int *table) {	//Creating a mapping from key and storing it in table
	
	for (int i = 0; i < 26; i++) {		//Setting default values of table to -1
		table[i] = -1;
	}
	
	int i = 0, j = 0;
	while (key[i] != '\0') {	//Iterating through key
		if (key[i] == ' ' || table[key[i] - 'a'] != -1) {	//Ignoring white spaces and cases where the char in key is already mapped
			i++;
			continue;
		}
		table[key[i] - 'a'] = 'a' + j;		//For each character in key not already mapped to a character in table, the corresponding mapping is made
		j++;								//and stored in the form of the ASCII code corresponding to the decoded character.
		i++; 
	}
}

void decodeMessage(char *msg, int *table) {		//Decodes message using table, replacing the characters in msg with corresponding decoded characters
	for (int i = 0; msg[i] != '\0'; i++) {
		if (msg[i] == ' ') {
			continue;
		}
		msg[i] = table[msg[i] - 'a'];
	}
}

int main() {
	char key[200];		//Takes input of key
	printf("key = ");
	char c;
	int i = 0;
	scanf("%c", &c);
	key[i] = c;
	i++;
	while (1) {		//Loop to take whitespace input as well, only stops when input goes to next line(\n)
		scanf("%c", &c);
		if (c == '\n') {
			break;
		}
		key[i] = c;
		i++;
	}
	key[i] = '\0';
	
	int table[26];
	createTable(key, table);		//Initializes table values with key
	
	char message[200];	//Takes input of message
	printf("message = ");
	i = 0;
	scanf("%c", &c);
	message[i] = c;
	i++;
	while (1) {		//Loop to take whitespace input as well, only stops when input goes to next line(\n)
		scanf("%c", &c);
		if (c == '\n') {
			break;
		}
		message[i] = c;
		i++;
	}
	message[i] = '\0';
	
	decodeMessage(message, table);	//Decodes message
	printf("Decoded message: %s", message);		//Prints decoded message
	
	return 0;
}
