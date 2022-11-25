//NAME --- ASHUTOSH RAVINDRA GOLANDE
//ROLL NO. -- 21CS10011
//MACHINE NO. --- 7
//ASSIGNMENT 6 
//QUESTION 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//creating the ascii code
int giveAscii(char c)
{	//storing ascii value
	int x= c;
	return x;
}
//creating the node that would store key and its values
typedef struct node
{
	char key;
	char m;
	struct node*next;

}node;
//initialising hashtable of size 26 because of 26 small characters
node*hashTable[26];
//calculating hashcode from 0 to 26
int hashCode(char c)
{
	return giveAscii(c)-'a';
}
//initialising node and returning
node*generateNode(char x,char y)
{
	node*newnode=(node*)malloc(sizeof(node));
	newnode->next=NULL;
	newnode->key=x;
	newnode->m=y;
	return newnode;
}
//inserting function not allowing duplicates
void insert(char key,char m)
{
	int hashIndex=hashCode(key);
	node*temp=hashTable[hashIndex];
	if(temp==NULL)
	{
		node*newnode=generateNode(key,m);
		hashTable[hashIndex]=newnode;
	}

}
//displaying hash table
void display()
{
	for(int i=0;i<26;i++)
	{
		
	if(hashTable[i])
	{
		printf("(%c,%c)",hashTable[i]->key,hashTable[i]->m);
		printf("\n");
	}
		

	}

}
//searching the key and returning its address
node*search(char key)
{
	int hashIndex=hashCode(key);
	node*temp=hashTable[hashIndex];
	if(temp!=NULL)
	{
		return temp;
	}

}
void creatingHashTable(char name[500])
{
	int size=strlen(name);
	int count=0;
	for(int i=0;i<size-1;i++)
	{
		printf("%c",name[i]);
		if(name[i]!=' ')
		{
			insert(name[i],'a'+count);
			count++;
		}

	}
}
int main()
{
	char key[500];
	char message[500];
	printf("key: ");
	fgets(key,500,stdin);
	printf("message: ");
	fgets(message,500,stdin);
	creatingHashTable(key);
	int x=strlen(message);
	char decode[500];
	int c=0;
	display();
	node*temp=search('s');
	for(int i=0;i<=x-2;i++)
	{
		if(message[i]!=' ')
		{
			node*temp=search(message[i]);
			decode[c++]=temp->m;
		}
		else
		{
			decode[c++]=' ';
		}

	}
	decode[c]='\0';
	puts(decode);
	
	
	
	

	return 0;
}
