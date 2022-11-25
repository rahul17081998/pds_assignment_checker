/**
 * Name: Yelisetty Karthikeya S M
 * Roll No.: 21CS30060
 * Assignment: 7
 * Machine: 30
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// just a typedef to use char* as string
typedef char * string;

// This function takes is a character array 'key', and creates the hash table according to that
void make_hash(string key, string hash){
	int k=0, i, j, flag=0, n=strlen(key);
	char c;
	for (i = 0; i<n; ++i)
	{
		flag=0;
		c=key[i];
		if(c>'z'||c<'a') continue;
		for (j = 0; j < k; ++j)
		{
			if(hash[j]==c)
			{
				flag=1;
				break;
			}
		}
		if(flag==0) hash[k++]=c;
	}
}
/*
While the hash table created previously can be used for encoding, 
this reverse_hash table can be used for decoding a given message 
*/
void reverse_hash(string hash, string rev_hash){
	int i;
	for (i = 0; i < 26; ++i)
	{
		rev_hash[hash[i]-'a']=(char)(i+(int)('a'));
	}
}

// This function makes use of the reverse hash table made to decode the input string
void decode(string input, string rev_hash){
	int i;
	for (i = 0; input[i]!='\0'; ++i)
	{
		if(input[i]>='a' && input[i]<='z')
		{
			input[i]=rev_hash[input[i]-'a'];
		}
	}
}

/*
This is a custom read function to get the string 
from the input which contains space characters
*/
void readStr(string s){
	char c;
	int i=0;
	while((c=getchar())!='\n'){
		s[i++]=c;
	}
	s[i]='\0';
}

int main()
{
	// declaring required variables
	char hash[26], key[100], message[100],rev_hash[26];
	
	// Taking in user input for key and message
	printf("Key: ");
	readStr(key);
	printf("Message: ");
	readStr(message);

	// Giving the key as input so as to make the hash table
	make_hash(key, hash);
	// creating a reverse hash for efficient decoding
	reverse_hash(hash, rev_hash);
	// decoding the message and printing it
	decode(message, rev_hash);
	printf("Decoded Message: %s\n", message);
	
	// Note: While this process can be done using only one hash 
	// array(only the rev_hash one), the hash also helps in encoding a string
	return 0;
}
