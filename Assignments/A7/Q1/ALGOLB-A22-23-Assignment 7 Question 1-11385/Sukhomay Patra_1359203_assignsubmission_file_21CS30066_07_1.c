#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define CAPACITY 26

typedef struct
{
	int data;
	int status;	
}CELL;

//Hash Table
CELL H[CAPACITY];

int main()
{
	//Input
	size_t max_size=500;
	char *key=(char*)malloc(max_size*sizeof(char));
	printf("key = ");
	getline(&key,&max_size,stdin);
	printf("message = ");
	char *mssg=(char*)malloc(max_size*sizeof(char));
	getline(&mssg,&max_size,stdin);
	int i;
	
	//Initializing hash table
	for(i=0; i<CAPACITY; i++)
	{
		H[i].status=0;
	}
	
	//Calculating length of strings
	int key_len=strlen(key);
	int mssg_len=strlen(mssg);

	//Mapping the code(key) with alphabets
	int k=0; 
	for(i=0; i<key_len-1; i++)
	{
		if(key[i]==' ')
			continue;
		if(H[key[i]-'a'].status==0)
		{
			H[key[i]-'a'].data='a'+k;
			k++;
			H[key[i]-'a'].status=1;
		}	
	}
	
	//Output
	printf("Decoded message: ");
	for(i=0; i<mssg_len-1; i++)
	{
		if(mssg[i]==' ')
			printf(" ");
		else
			printf("%c", H[mssg[i]-'a'].data);
	}
	printf("\n");
	return 0;
}



