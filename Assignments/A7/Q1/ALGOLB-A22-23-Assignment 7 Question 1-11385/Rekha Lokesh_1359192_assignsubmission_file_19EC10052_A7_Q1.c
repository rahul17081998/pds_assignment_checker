/*
	Name: Rekha Lokesh
	Roll No: 19EC10052
	Dept: Electronics and Electrical Communication Engineering
	Machine NO: 96
	Q: A7_Q1
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	char key[1000000], message[1000000];
	
	printf("Enter key: ");
	scanf("%[^\n]%*c", key);
	
	
	printf("Enter message: ");
	scanf("%[^\n]%*c", message);	
	
	
	int i=0, j=0;	// j is the cuurent hashable alphabet from 0 to 25
	
	int mapper[26];	//hash table
	for (i=0; i<26; i++)	mapper[i] = -1;	//No alphabet hashed
	
	int n = strlen(key), m = strlen(message);	//length od key and message respectively
	
	for (i=0; i<n; i++)
	{
		if(key[i] >= 'a' && key[i] <='z' && mapper[key[i]-'a']==-1)	//if the character is a lowercase alphabet and is not hashed yet
		{
			mapper[key[i]-'a'] = j;	//hashing the alphabet (key[i]) to an alphabet 'a'+j
			j++;	//moving to the next hashable value
		}
	}
	
	if(j<26)
	{
		printf("All alphabets are not present in the key\n");
		return 0;
	}
	

	char dec_message[1000000];	
	
	for (i=0; i<m; i++)
	{
		if (message[i]>='a' && message[i]<='z')	//encoding only lowercase english alphabets
		{
			dec_message[i] = mapper[message[i]-'a']+'a';
		}
		else	//remaining characters are left as it is
		{
			dec_message[i] = message[i];
		}
	}
	dec_message[i] = '\0';	//ending the message with a NULL
	
	printf("Decoded message: %s\n", dec_message);
	
	
	return 0;
}
