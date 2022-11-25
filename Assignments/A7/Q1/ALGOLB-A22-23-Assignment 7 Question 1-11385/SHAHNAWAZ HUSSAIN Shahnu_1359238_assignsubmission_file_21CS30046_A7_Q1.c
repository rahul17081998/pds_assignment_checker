/*
Name - Shahnawaz Hussain
Roll No - 21CS30046
Machine No - 23
Dept- Department of Computer Science And Engineering.
Assignment no - 07-01
*/

#include <stdio.h>
#include <stdlib.h>

int hash(char ch)	//Funtion for generating hash number
{
	if(ch < 'a' || ch > 'z')
		return -1;	// If not a lowercase character
	return ch-'a';	//returning the position of this char in english alphabet
}


int main() {
	
	int i;
	char key[100];		// For storing key
	char message[200];	// For storing message
	
	printf("\nKey \t\t: ");	//Taking input
	scanf("%[^\n]",key);
	//printf("%s\n\n",key);
	printf("\nMessage \t: ");	//Taking input
	scanf(" %[^\n]",message);
	//printf("%s\n\n",message);
	
	int ht[26];
	for(i=0;i<26;i++) 	//Initailly initializing table with -1
		ht[i]=-1;
	//for(i=0;i<26;i++)
		//printf("%d ", ht[i]);


	int position=0;	//Maintaing a variable for the positon of the char in key
	for(i=0;key[i]!='\0';i++)	// For all elememt in key
	{
		int idx=hash(key[i]);	//Finding the vale of hash
		if(idx>=0)		//If a valid hash
			if(ht[idx]==-1)	//If previously not updated
				ht[idx]=position++;	
	//Storing the position of this char at the correct index according to hash value with the correct position of this char in the key 
	}
	for(i=0;i<26;i++)
		printf("%d ", ht[i]);
	for(i=0;message[i]!='\0';i++)	//for all element in message
	{
		int letter=message[i];	
		if(letter>='a' && letter<='z')	//If a valid message
			message[i]='a'+ht[hash(letter)];	//Updating that message char with correct char using the table
	}
	
	printf("\nDecoded message\t: %s\n\n",message);	//printing the result

	
   	return 0;
}
