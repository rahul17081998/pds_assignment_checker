// Name: Aritra Chakraborty
// Roll no.: 21CS10009
// Dept: Department of Computer Science and Engineering
// Machine no.: 06

#include <stdio.h>
#include <stdlib.h>

// hash table of alphabet mappings from the key
char hash[26];
// count keeps track of the next alphabet to be assigned to the next letter of the key when some letters of the key have been repeated
int count = 0;

// function that takes the key and the message details as input and prints the decoded result
void decode(char key[], char msg[], int key_len, int msg_len){ // key_len and msg_len are lengths of the key and message respectively
	printf("The decoded message is: ");
	
	// hash mapping is done first for each letter of the key
	for(int i=0; i<key_len; i++){
		// backspaces are skipped while mapping
		if(key[i] == ' '){
			continue;
		}
		
		// if the hash of the current letter is '*' then its mapping is not done yet and hence the corresponding alphabet is mapped
		if(hash[key[i]-'a'] == '*'){
			hash[key[i]-'a'] = (char)(count+97);
			count++;
		}
	}
	
	// here the message is decoded using the hash table
	for(int i=0; i<msg_len; i++){
		// if the message contains a whitespace then it is printed as it is
		if(msg[i] == ' '){
			printf("%c", msg[i]);
		}else if(hash[msg[i]-'a'] == '*'){ // in case the hash of any key is '*' then that means that key is not yet mapped and hence decoding is not possible
			printf("...\nSorry cannot decode further since one or more required alphabet mappings are missing.");
			break;
		}else{ // in normal cases the decoded value is simply printed
			printf("%c", hash[msg[i]-'a']);
		}
	}
	printf("\n");
}

int main()
{	
	// hash table is initialized with '*'
	for(int i=0; i<26; i++){
		hash[i] = '*';
	}
	
	// key and message strings are declared. fgets() is used to take the input as the input string may contain whitespaces
	char key[1000], msg[1000];
	printf("Enter the key: ");
	fgets(key, 1000, stdin);
	printf("Enter the message: ");
	fgets(msg, 1000, stdin);
	int key_len = 0, msg_len = 0;
	
	// length of the key and message is calculated
	while(key[key_len]!='\n'){
		key_len++;
	}
	while(msg[msg_len]!='\n'){
		msg_len++;
	}
	
	// decode() is called with the key and message details to decode the message
	decode(key, msg, key_len, msg_len);
	return 0;
}
