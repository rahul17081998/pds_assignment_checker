/* Name : Anit Mangal
Roll no : 21CS10005
Dept : CSE
Machine no : 03 */

#include <stdio.h>
#include <stdlib.h>
#define key_limit 50
#define message_limit 200

int main() {
	// Initialise hash table of 26 alphabets with values -1
	int hash[26];
	for (int i = 0; i < 26; i++) hash[i] = -1;
	
	// Take key and message as input
	int ind = 0;
	char c;
	printf("key = ");
	char key[key_limit];
	while(1) {
		c = getchar();
		if (c == '\n') {
			key[ind++] = '\0';
			break;
		}
		else key[ind++] = c;
	}
	printf("message = ");
	char message[message_limit];
	ind = 0;
	while(1) {
		c = getchar();
		if (c == '\n') {
			message[ind++] = '\0';
			break;
		}
		else message[ind++] = c;
	}
	
	// Hash the index of the first occurence counting only the first occurences of the characters in key
	ind = 0;
	for (int i = 0; key[i] != '\0'; i++) {
		if (hash[key[i]-'a'] == -1) {
			hash[key[i]-'a'] = ind;
			ind++;
		}
	}
	
	// Decode and print
	printf("Decoded message: \"");
	for (int i = 0; message[i] != '\0'; i++) {
		if (message[i] >= 'a' && message[i] <= 'z') printf("%c", 'a'+(hash[message[i]-'a']));
		else printf("%c", message[i]);
	}
	printf("\"\n");
}
