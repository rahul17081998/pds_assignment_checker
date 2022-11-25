
/*
	Name: Aditya Patankar
	Roll no.: 21CS10051
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	char ch;
	int flag;
}cell;

int main()
{
	char key[100],message[100],decoded[100];
	cell hash[26];
	int i,j;
	//Initialising hash table
	for(i = 0 ; i < 26 ; i++)
		hash[i].flag = 0;
	printf("Enter the key\n");
	fgets(key,100,stdin);
	printf("Enter the message\n");
	fgets(message,100,stdin);
	j = -1;
	//Making hash table
	for(i = 0 ; i < strlen(key) ; i++)
	{
		//Ignore characters other than alphabets
		if(key[i] >= 'a' && key[i] <= 'z')
		{
			//Ensuring that the alphabet isn't in the hash table
			if(hash[key[i] - 'a'].flag == 0)
			{
				j++;
				hash[key[i] - 'a'].ch = 'a' + j;
				hash[key[i] - 'a'].flag = 1; 
			}
		}
	}
	//Decoding the message
	for(i = 0 ; i < strlen(message) ; i++)
	{
		//Non - alphabet characters are copied as it is
		//The alphabets are substituted with the values in hash table
		if(message[i] >= 'a' && message[i] <= 'z')
			if(hash[message[i] - 'a'].flag == 1)
				decoded[i] = hash[message[i] - 'a'].ch;
			else
			{
				//alphabets in the message are not in the key
				printf("Insufficient to decode\n");
				exit(0);
			}
		else
			decoded[i] = message[i];
	}
	decoded[i] = '\0';
	printf("The decoded message is \n");
	printf("%s",decoded);
}

