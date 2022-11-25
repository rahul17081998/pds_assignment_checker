/*Name:Ishan Ray
Roll no.:21CS10033
Dept: Department of Computer Science and Engineering
Machine no.:66*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 26

//creating the hash function
typedef struct hashing
{
	char key;
	char data;
}hash;

hash *hashtable[SIZE];
hash *item;
hash *dummy;

//the search function
int search(char key)
{	
	int h=0;
	while(hashtable[h]!=NULL)
	{
		if(hashtable[h]->key==key)
			return h;		
		++h;	
	}
	return -1;
}

//the insert function
hash *insert(char key,char data,int i)
{
	hash *item=(hash *)malloc(sizeof(hash));
	item->key=key;
	item->data=data;
	
	/*int h=key%SIZE;
	while(hashtable[h]!=NULL && hashtable[h]->key!=-1)
	{
		++h;h%=SIZE;	
	}*/
	hashtable[i]=item;
}

/*hash *delete(hash *item)
{}*/

//the display function
void display()
{
	for(int i=0;i<SIZE;i++)
	{
		if(hashtable[i]!=NULL)
			printf("(%c %c)",hashtable[i]->key,hashtable[i]->data);
		
		else
			printf("(--)");
	}
	printf("\n");
}

//function to find if a element has appeared before
int found(char arr[],int i)
{
	for(int j=0;j<i;j++)
	{
		if(arr[j]==arr[i])
			return 1;
	}
	return 0;
}

int main()
{
	hash *dummy=(hash *)malloc(sizeof(hash));
	dummy->key=-1;
	dummy->data=-1;
	
	//taking inputs
	char arr[100],arr2[100];
	printf("Enter the value of key: ");
	for(int i=0;i<100;i++)
		{
			scanf("%c",&arr[i]);
			if(arr[i]=='\n')
				break;
		}
		
	printf("Enter the value of message: ");
	for(int i=0;i<100;i++)
		{
			scanf("%c",&arr2[i]);
			if(arr2[i]=='\n')
				break;
		}
	int k=0,x=0;
	while(arr[k]!='\n')
		k++;
	while(arr2[x]!='\n')
		x++;
	int num=0,t=0;
	
	//printf("%d %d\n",k,x);
	for(int i=0;i<k;i++)
	{
		if(!found(arr,i) && arr[i]!=' ')
		{
			insert(arr[i],(char)('a'+num),num);
			num++;		
		}
	}
	//display();
	//displaying the decoded message
	printf("The decoded message is: ");
	for(int i=0;i<x;i++)
	{
		if(arr2[i]==' ')
			printf(" ");
		else
		{
			int p=search(arr2[i]);
			if(p==-1)
			{
				printf("Can't decode message any longer as required key and data not found");
				return 0;
			}
			else
				printf("%c",hashtable[p]->data);
		}
	
	}
	
	
	
	
	return 0;
}
