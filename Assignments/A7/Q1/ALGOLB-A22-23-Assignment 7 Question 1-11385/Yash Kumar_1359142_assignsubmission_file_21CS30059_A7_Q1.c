#include <stdio.h>
#include <string.h>
#define size 26
char hashtable[size];
int count=0;					//Variable to keep count of number of filled indices of hashtable

void insert(char key)				//Function to insert key in the hashtable
{
	if(count==size||key>122||key<97)
		return ;
	for(int i=0;i<count;i++)
	{
		if(hashtable[i]==key)
			return ;
	}
	hashtable[count++]=key;
}
int main()
{
	printf("Key: ");
	char s[100],m[200],dm[200];
	int i,j,c=0;
	scanf("%[^\n]%*c",s);
	for(i=0;i<strlen(s);i++)
	{
		insert(s[i]);
	}
	printf("Message: ");
	scanf("%[^\n]%*c",m);
	for(i=0;i<strlen(m);i++)
	{
		if(m[i]==' ')			//If the character is a space, decoded message stores the space itself
		{
			dm[c++]=' ';
			continue;
		}
		for(j=0;j<26;j++)
		{
			if(hashtable[j]==m[i])
			{
				dm[c++]='a'+j;
				break;
			}
		}
	}
	printf("Decoded message: %s", dm);	//Printing the decoded message
}


