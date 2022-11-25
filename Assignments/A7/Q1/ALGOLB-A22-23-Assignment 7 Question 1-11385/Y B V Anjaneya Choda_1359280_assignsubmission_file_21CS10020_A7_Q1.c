/*Name: Choda Y B V Anjaneya
Roll No:21CS10020
system No:43
Assignment 7 Q.1.c
Hashing */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 26

struct node{
	char value;
	char idx;
	
	struct node* next;
	
};
struct node* hashtable[size];
void hashidx()
{
	char i;
	int p=0;
	for(i='a';i<='z';i++)
	{
		hashtable[p]->idx=i;
		p++;
	}
	/*for(p=0;p<26;p++)
	{
		printf("%c",hashtable[p]->idx);
	}*/
}
//function that stores key elements in hashtable values
void hashcode(char m[])
{
	int i,j=0;
	for(i=0;m[i]!='\0';i++)
	{
		if(m[i]==' ')
		{

		}
		else
		{
			hashtable[j]->value=m[i];
			j++;
		}
	}

}
//function to find key and return corresponding code from hashtable idx
char search(char key)
{
	int i;
	char ans;	
	while(hashtable[i]!=NULL)
	{
		if(hashtable[i]->value==key)
		{
			 ans=hashtable[i]->idx;
			return ans;
			break;
		}
		i++;
	}
	
}


int main()
{
	char key[10000],message[100000];
	
	printf("key= ");
	scanf("%s",key);
	printf("message= ");
	scanf("%s",message);
	int i,j;
	//processing all repeated alphabets 
	for(i=0;key[i]!='\0';i++)
	{
		char p=key[i];
		for(j=i+1;key[j]!='\0';j++)
		{
			if(key[j]==p)key[j]=' ';
		}
	}
	//function call to assign codes to hashtable
	hashcode(key);
	//output
	for(i=0;message[i]!='\0';i++)
	{
		if(message[i]==' ')printf(" ");
		else
		{
						
			printf("%c",search(message[i]));
		}
	}
	
	

	return 0;
}
