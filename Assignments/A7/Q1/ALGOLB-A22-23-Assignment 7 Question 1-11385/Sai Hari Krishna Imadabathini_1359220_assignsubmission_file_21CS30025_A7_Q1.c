#include<stdio.h>
#include<string.h>
char key[100];
int HashTable['z'];
int hash(char a)//returning ascii value as output
{
	int ascii;
	ascii=a;
	return ascii;
}

void insert(int HashTable[])//inserting the key character into hash table
{
		int i,count=0;
		for(i=0;i<strlen(key);i++)
		{
		if(HashTable[hash(key[i])]==0)//so that the letter hasnt already have a letter mapped to it
			{
		HashTable[hash(key[i])]='a'+count;//mappin the letters to alphabet in order
		count++;
			}
		}
		HashTable[hash(hash(key[strlen(key)]))]=key[strlen(key)];//mapping space to itself in hash table
}
	
int* decode(char message[])//decoding the message
{
	int i,*Ascii;
	for(i=0;i<strlen(message);i++)
		{
			Ascii[i]=HashTable[hash(message[i])];
		}
		return Ascii;
}

int main()
{
	int *Ascii,i;
	char message[100];
	scanf("%s",key);
	insert(HashTable);
	scanf("%s",message);
	Ascii=decode(message);//decodes the message
	printf("\n");
	for(i=0;i<strlen(message);i++)
	{
		printf("%c",Ascii[i]);//printing the decoded message
	}
}

		
