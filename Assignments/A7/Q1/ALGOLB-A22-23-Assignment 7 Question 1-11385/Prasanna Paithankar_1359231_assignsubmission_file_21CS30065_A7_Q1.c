/*************************
Name: Prasanna Paithankar
Roll no.: 21CS30065	
LAB/PC no.: Lab 5/ 60
Date: 27/10/2022
Assignment no.: 7/Q1
*************************/

//Header files
#include<stdio.h>
#include<stdlib.h>
#define max 500

int ht[26];

//Creates a hashtable as mentioned in the question
//Maps the first occurence to the entry in lexicographical order using iterator j
//Complexity O(len(key))
void hashCode(char key[])
{
	int i = 0;
	int j = 0;
	for(i = 0; i < 26; i++)
	{
		ht[i] = -1;
	}
	i = 0;
	while(key[i] != '\0') 
	{
		if(key[i] != ' ') //Omits spaces
		{
			if(ht[((int)key[i]) - 97] == -1) //Ignores duplicate entries
			{
				ht[((int)key[i]) - 97] = j;
				j++;
			}
		}
		i++;
	}
}

//Complexity O(len(message) + len(key))
void decode(char key[], char mes[])
{
	hashCode(key);
	int i = 0;
	while(mes[i] != '\0')
	{
		if(mes[i] == ' ')
		{
			printf(" ");
		}
		else
		{
			printf("%c", ht[((int)mes[i]) - 97] + 97);
		}
		i++;
	}
	printf("\n");
}

/*Driver*/
int main()
{	
	//Declaration
	char key[max];
	char message[max];
	
	//Input
	printf("Enter the key: \n");
	fgets(key, max, stdin);
	
	printf("Enter the message: \n");
	scanf("%[^\n]s", message);
	
	//Computation & Output
	printf("Decoded message: ");
	decode(key, message);
	
	return 0;
}





























































