#include<stdio.h>
#include<string.h>

/*
NAME : KUMAR RISHAV
ROLL NO : 19MT30011
*/


int main()
{
	char key[999], message[999];
	int hash[26], freq[26] = {0};
	//hash store the complement value of that char in hashing map
	// freq stores the first occurence freq to avoid double mapping

	printf("Enter the key : ");
	fgets(key, 999, stdin); // taking input using fgets

	printf("Enter the encoded message : ");
	fgets(message, 999, stdin);

	int i, j = 0;
	for(i=0;key[i] != '\0';i++)
	{
		if(freq[key[i] - 'a'] == 0) // only when the char is appeared first time
		{ 
			freq[key[i] - 'a']++;
			hash[key[i] - 'a'] = j++; // assigning the mapped char in hash index arr
		}
	}
	// getting the size of message 
	int n = 0;
	for(i=0;message[i] != '\0';i++) n++;


	printf("\n\nDecoded message : \"");
	for(i=0;i < n-1;i++)
	{
		if(message[i] == ' ') printf(" "); // give space
		else 
		{	
			printf("%c",'a' + hash[message[i] - 'a']); //print the mapped char
		}
	}
	printf("\"\n");

	return 0;
}
