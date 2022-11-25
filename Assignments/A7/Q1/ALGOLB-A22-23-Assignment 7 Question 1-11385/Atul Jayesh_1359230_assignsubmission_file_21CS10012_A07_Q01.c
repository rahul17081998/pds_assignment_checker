/*  Name: Atul Jayesh
	Roll no:21CS10012
	System no:39*/
#include<stdio.h>
#include<string.h>
//Function to build the hash table
void hashBuilder(char key[],char hashTable[])
{
	int i,count=0;
	//Initialising the hashTable to an unused character to check if the corresponding letter has been assigned a key
	for(i=0;i<26;i++)
	{
		hashTable[i]='A';
	}
	for(i=0;(key[i]!='\0')&&(count<26);i++)
	{
		if(hashTable[(int)key[i]-97]=='A')
		{
			hashTable[(int)key[i]-97]=(char)(count+97);
			count++;
		}
	}
}
int main()
{
	char key[100],message[100],hashTable[27];
	int i;
	printf("Enter the key: ");
	gets(key);
	hashBuilder(key, hashTable);
	printf("Enter the message: ");
	gets(message);
	printf("\nThe decoded message is: ");
	for(i=0;message[i]!='\0';i++)
	{
		if(message[i]==' ')
			printf(" ");
		else
			printf("%c",hashTable[(int)message[i]-97]);
	}
	return 0;
}
