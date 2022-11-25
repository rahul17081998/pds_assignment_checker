#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
	char a;
	char b;
};
struct node* hash_table[26];

int hash(char x)
{
	return x%26;
}
void Insert(char c,char d)
{
	struct node*node;
	node=(struct node*)malloc(sizeof(struct node));
	node->a=c;
	node->b=d;
	int index;
	index=hash(c);
	hash_table[index]=node;
}
void Print()
{
	int i;
	for(i=0;i<26;i++)
	{
	     printf("(%d)",i);
	     if(hash_table[i]!=NULL)
	     {
		printf("(%c-%c)",hash_table[i]->a,hash_table[i]->b);
		printf("\n");
	     }
	     else
	     {
		printf("-----\n");
	     }
	}
}
struct node* Search(char x)
{
	int i;
	for(i=0;i<26;i++)
	{
	      if(hash_table[i]->a==x)
	      {
		  return hash_table[i];
	      }
	}
}
int main()
{
	int i,j;
	for(i=0;i<26;i++)
	{
	     hash_table[i]=NULL;
	}
	char key[500];
	printf("Enter the key:\n");
	scanf("%s",key);
	int length=strlen(key);
	for(i=0;i<length;i++)
	{
	   int index;
	   index=hash(key[i]);
	   if(hash_table[index]->a!=key[i]||hash_table[index]==NULL)
	   {
		Insert(key[i],'a'+i);
	   }
	}
	Print();
	char message[500];
	printf("Enter message:\n");
	scanf("%s",message);
	int l=strlen(message);
	for(i=0;i<l;i++)
	{
	     struct node*temp=Search(message[i]);
	     printf("%c",temp->b);
	}
	printf("\n");
}
