#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//Hashing!

/*
Multi-line comment explaining the substitution cypher

Since the substitution table is given as the key, let us substitute numbers for the simpletext - 
a -> 0, b -> 1, and so on until z -> 25.

Store the decoding of each letter in the array of 26 spaces, corresponding to the number-cypher of the simpletext. -- Here, the number-cypher acts as the hash-code of the letters of the key.

As an example of what this means - let the cyphertext be "eljuxhpwnyrdgtqkviszcfmabo". Then, the letter e encodes for a, l for b, j for c and so on.

Store a at index 4 of the decoder array, b at index 11, c at 10 and so on. This will be the simpletext transformation, and the acting hash of the program.

So, in this program there will be a hash array of 26 spaces, carrying the decoder for the encrypted message (The variable for the key itself). No extra space, since it is an input.
*/


int main() {

	char decoder[26] = {'\0'}, key[27], message[200]; //Initialise the decoder array, key and message. The message here has a 200 char limit, which can be extended upto a limit.
	 
	int i; //Counter variable.
	
	printf("\nEnter the key (26 characters, notwithstanding whitespaces): ");
	
	for (i = 0; i < 26; i++) {
		
		scanf("%c", &key[i]); //Scans each character
		
		if (key[i] == ' ' || decoder[key[i] - 'a'] != '\0') i--; //If a space is encountered, rewrite over the whitespace.
		
		else {
			
			decoder[key[i] - 'a'] = 'a' + i; // Fill the decoder (hash) array.
		}
	}
	
	scanf("%c", &key[26]); //Clears the input buffer.
	
	key[26] = '\0'; //Null-terminates the array of characters.
	
	printf("\nEnter the message to be decoded: \n");
	scanf("%[^\n]s", message);
	
	printf("\nThe decoded message is: \n");
	
	for (i = 0; message[i] != '\0'; i++) {
		
		if (message[i] == ' ') printf(" "); //Do not transform whitespaces.
		
		else {
			
			printf("%c", decoder[message[i] - 'a']); //Transform characters based on the cyphertext. Prints out character by character, eliminating the need for extra storage.
		}
	}
	
	printf("\n\n");

	return 0;
}

//The net complexity of the program = O(n) for the char by char decoding.
