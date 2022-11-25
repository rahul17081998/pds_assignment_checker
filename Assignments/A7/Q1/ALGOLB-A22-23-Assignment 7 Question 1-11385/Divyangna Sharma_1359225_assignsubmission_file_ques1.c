/***********
Name: Divyangna Sharma
Roll no: 19CY20015
Machine no: 62
************/

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int max(int a, int b)
{
	if(a>=b)
	return a;
	else return b;
}
int min(int a, int b)
{
	if(a<=b)
	return a;
	else return b;
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

#define size 26
#define mx 1000
char key[1000]; //key string
char arr[26]; //hash table
char message[1000];
int flag[26];
int main()
{
	
	//setting the default value of the keys of arr as -1.
	for(int i=0;i<26;i++)
	{
		arr[i]=-1;	
	}


	printf("Enter the key: \n");
	fgets(key, mx, stdin);
	int k=strlen(key)-1;

	int t=97;
	for(int i=0;i<k;i++)
	{
		if(key[i]>=97 && key[i]<=122){
		char val=key[i];
		//if this is the first occurance of the letter
		if(flag[val-'a']==0)
		{
			arr[val-'a']=t; //setting the hash table's key value pair 
			t++;
		}
		flag[val-'a']=1;
		}
	}

	printf("Enter the message: \n");
	fgets(message,mx,stdin);
	int sz=strlen(message)-1;

	printf("arr:\n");
	for(int i=0;i<26;i++)
	printf("%c",arr[i]);
	printf("\n");

	printf("The decoded message is: \n");

	for(int i=0;i<sz;i++)
	{
		
		if(message[i]>=97 && message[i]<=122)
		{
			printf("%c",arr[message[i]-'a']);
		}
		else printf("%c", message[i]);
	}
	printf("\n");

	//Time complexity of the entire code: O(n)
	
	
}
