// Roll no.: 21CS10010
// Department: Computer Science and Engineering
// System  no.: 38

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* key = (char*)malloc(200 * sizeof(char));
	char* message = (char*)malloc(200 * sizeof(char));
	printf("key = ");
	size_t max_size = 200;
	getline(&key, &max_size, stdin);	// we assume that this contains lowercase alphabets or spaces
	printf("message = ");
	getline(&message, &max_size, stdin);	// we assume that this contains lowercase alphabets or spaces
	int table[26];
	/*
	For each character c in the message, we get the corresponding character of the decoded message as 
		'a' + table[c - 'a']
	*/
	int i;
	for (i = 0; i < 26; i++)
		table[i] = -1;	// initializing with -1
	i = 0;
	int j;
	char c;
	for (j = 0; key[j] != '\0'; j++) {	// loop through the characters of key
		c = key[j];
		if ((c < 'a') || (c > 'z'))
			continue;
		if (table[c - 'a'] == -1) {	// first appearance of c in key
			table[c - 'a'] = i;
			i++;
		}
	}
	// Now, we can decode the message using the hash table.
	printf("Decoded message: ");
	for (j = 0; message[j] != '\0'; j++) {
		c = message[j];
		if ((c < 'a') || (c > 'z')) {
			printf("%c", c);	// if it's not an alphabet
		}
		else {
			printf("%c", 'a' + table[(unsigned int) (c - 'a')]);
		}
	}
	printf("\n");
	return 0;
}
