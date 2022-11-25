#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node
{
	char alph;
	char code;
};

//initialising hash table
struct node* hashTable[1000];

void initialise()
{
	int i;
	for(i=0;i<26;i++)
	{
		hashTable[i]->code='a' + i;
	}
}

//user-defined function to insert the alphabets in the hash table.
int insert(int i,char alphabet)
{
	//first check whether the passed key is already present or not, if yes then return.
	int j;
	for(j=0;j<i;j++)
	{
		if(alphabet==hashTable[j]->alph)
		{
			return 0;
		}
	}

	hashTable[i]->alph=alphabet;
	return 1;
}

//user-defined function to search the alphabet and print its respective code.
void search(char alphabet)
{
	int i;
	for(i=0;i<26;i++)
	{
		if(hashTable[i]->alph==alphabet)
		{
			printf("%c",hashTable[i]->code);
			return;
		}

		else
			continue;	
	}

}

int main()
{
	size_t maxsize =1000;	
	char *key=(char*)malloc(sizeof(char));
        char *message = (char*)malloc(sizeof(char));
	printf("key= ");
	getline(&key,&maxsize,stdin);
	//printf("%s\n",key);
	printf("message= ");
	getline(&message,&maxsize,stdin);
	//printf("%s",message);	
	
	int len1=strlen(key);
	int count1=0;
	initialise();
	int z;
	int i;

	//running a for loop for doing the substitution(step-2 of the question)	
	for(i=0;i<len1;i++)
	{
		if(key[i]!=' ')
		{
			z=insert(count1,key[i]);
			if(z!=0){ count1++; }
		}
		
		else
			continue;
	}

 
	

	
	
	int len2=strlen(message);
	

	//going to run a for loop to print the decoded message.
	printf("Decoded message: ");
	for(i=0;i<len2;i++)
	{
		if(message[i]!=' ')
		{
			search(message[i]);
		}

		else
		{
			printf(" ");
		}
	}

	return 0;
}
