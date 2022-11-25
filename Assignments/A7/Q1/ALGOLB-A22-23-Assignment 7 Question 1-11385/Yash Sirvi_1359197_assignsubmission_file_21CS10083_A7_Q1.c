/*
Name: Yash Sirvi
Roll No: 21CS10083
Dept: Computer Science and Engineering
Machine No: 34
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The hash table H consists of 26 spaces for all the 26 letters of the alphabet
// Each H[i] contains the decoded message for the i+1st letter of the alphabet
// The hashing function is: hash of c = 'a' + i
// where i is the occurance of c in the provided key
int main(){
	int i = 0;
	char H[26];
	// We first initialise the hash table for avoiding collisions later on
	for (i = 0; i < 26; i++)
		H[i] = ' ';
	char c;
	printf("key = ");
	i = 0;
	// Getting the input key
	do{
		scanf("%c", &c);
		if (c == '\n')
			break;
		// Do not consider spaces
		if (c != ' '){
			// Avoiding collisions O(1)
			if (H[c-'a'] == ' '){
				// Applying our hash function
				H[c-'a'] = (char)(i+'a');
				i++;
			}
		}		
	}
	while(c!='\n');
	printf("message = ");
	// String for storing our decoded message
	char dec[1000];
	i = 0;
	// Simply taking the message input and going to the corresponding index
	// search is  O(1)
	do {
		scanf("%c", &c);
		if (c == '\n')
			break;
		if (c == ' ')
			dec[i] = c;
		else
			dec[i] =  H[c-'a'];
		i++;
	}
	while(c!='\n');
	dec[i] = '\0';
	printf("Decoded Message = %s\n", dec);
}


