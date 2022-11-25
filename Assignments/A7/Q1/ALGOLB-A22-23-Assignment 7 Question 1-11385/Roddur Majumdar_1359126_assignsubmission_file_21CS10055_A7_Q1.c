
/*Name:Roddur Majumdar
Roll no.:21CS10055
Dept:Department of Computer Science and Engineering*/


#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include<math.h>
#include<string.h>

char* cipher(char *s, int* x, int n)	//the code that returns the decoding hash table
{
	int i,j=0;
	char *a = (char*)malloc(27*sizeof(char));	//the hash table used to decode
	for(i=0;i<n;++i)
	{
		if(s[i]<='z'&&s[i]>='a')	//checking if the character is an alphabet
		{
			if(x[s[i]-'a']==-1)		//checking if the alphabet has been recorded previously
			{
				x[s[i]-'a']=0;		//marking the alphabet as recorded
				a[s[i]-'a']=j+'a';	//storing each letter of the alphabet in the index given by the string
				++j;
			}
		}
	}
	a[26]='\0';		
	return a;		//returning hash table
}

void main ()
{
	int x[26],i,n;	//x is the integer array storing occurrence of an alphabet in a key
	char *a,k[100],s[100000];

	printf("Enter the key :\n");	//taking the key as input
	scanf("%[^\n]s",k);

	getchar();		//removes extra nextline from input

	printf("Enter the message :\n");	//taking the coded message as input
	scanf("%[^\n]s",s);

	for(i=0;i<26;++i)		//setting the occurence of characters to -1 (does not exist)
		x[i]=-1;
	n=strlen(k);		//getting length of string
	a=cipher(k,x,n);	//creating hash table for decoding code

	printf("Decoded message is :\n");	//printing decoded message character by character
	for(i=0;i<strlen(s);++i)
	{
		if(s[i]<='z'&&s[i]>='a')
			printf("%c",a[s[i]-'a']);
		else
			printf("%c",s[i]);
	}
	printf("\n");
	return;
}//the quick brown fox jumps over the lazy dog       vkbs bs t suepuv
