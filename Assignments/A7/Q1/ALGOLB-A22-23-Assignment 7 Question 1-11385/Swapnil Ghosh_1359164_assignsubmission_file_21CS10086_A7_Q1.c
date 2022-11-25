/*
Name: Swapnil Ghosh
Roll No: 21CS10086
Dept: CSE
Machine No: 76
*/

#include<stdio.h>
#include<malloc.h>
#include<string.h>

int main()
{
	char A[26];//The character array A is our hash table//
	int B[26];//This array will keep the count of frequency of the charaxters in the key//
	char key[100];
	int n;
	printf("Enter the key: ");
	fgets(key,999,stdin);
	n=strlen(key);
	int i,j,k=0;
	for(i=0;i<26;i++) B[i]=0;
	for(i=0;i<n;i++)
	{
		if(B[key[i]-'a']==0)//Insertion of a key chracter in the hash table will only occur when that charater was not inserted previously//
		{
			B[key[i]-'a']++;
			A[k++]=key[i];//Insertion of key chracters in the hash table//
		}
	}
	char msg[100];
	char decmsg[100];
	printf("Enter the message: ");
	fgets(msg,999,stdin);
	n=strlen(msg);
	for(i=0;i<n;i++)
	{
		if(msg[i]==' ') decmsg[i]=msg[i];//Space will be kept as it is//
		else
		{
			for(j=0;j<26;j++)//Finding the position of the message character in the hash table//
			{
				if(msg[i]==A[j]) break;
			}
			decmsg[i]='a'+j;//Once the index is found, the decoded character will be the corresponding charater from the hash table//
		}
		
	}
	printf("The decoded message is: ");
	printf("\"");
	for(i=0;i<n-1;i++) printf("%c",decmsg[i]);
	printf("\"");
	printf("\n");
}
