/******************
Name: Sarnavo Sarkar
Roll Number: 19MT10037
Machine Number: 63
******************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int MAX_LIMIT = 1001;

int min(int a, int b) {
	if(a < b)
		return a;
	else
		return b;
}

int main() {
	char key[1002];
	printf("Key = ");
	fgets(key, MAX_LIMIT, stdin);
	
	char message[1002];
	printf("Message = ");	
	fgets(message, MAX_LIMIT, stdin);

	// To get the length of the string
	int m = strlen(key) - 1;
	int n = strlen(message) - 1;

	// Reverse Mapping of Characters using cnt as the base
	int encrypt[26], cnt = 0;
	memset(encrypt, -1, sizeof(encrypt));
	for(int i = 0; i < m; i++) {
			if(encrypt[key[i] - 'a'] == -1) {
		if('a' <= key[i] && key[i] <= 'z') {
				encrypt[key[i] - 'a'] = ('a' + cnt);
				cnt++;
			}
		} 
	}

	// Decoding it with the encrypt array
	char decode[1001];
	for(int i = 0; i < n; i++) {
		if('a' <= message[i] && message[i] <= 'z')
			decode[i] = encrypt[message[i] - 'a'];
		else
			decode[i] = message[i];
	}

	printf("\n");
	printf("Decoded Message: ");
	for(int i = 0; i < n; i++)
		printf("%c", decode[i]);
	printf("\n");
}

// Time Complexity = O(n)
// Space Complexity = O(n)

