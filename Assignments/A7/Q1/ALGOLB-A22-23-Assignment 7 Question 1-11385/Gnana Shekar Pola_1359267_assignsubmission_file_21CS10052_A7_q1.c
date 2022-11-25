/*
Name: Pola Gnana Shekar
Roll No: 21CS10052
Machine:59
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	//taking the string as the input
	char A[100];
	int i=0,j,k,len=0;//len to store the length of the string

	printf("Enter the key:\n");
	scanf("%c",&A[i]);
	while(A[i]!='\n')
	{
	i++;
	scanf("%c",&A[i]);
	len++;
	}

	//creating a hash table

	int B[26];
	for(i=0;i<26;i++)
	{
	B[i]=-1;
	}

	//eliminating the spaces and characters that are reapting muliple time in the array
	char C[26];//to store the string that does not contain any repetation.
	i=0;
	k=0;
	while(A[i]!='\n')
	{
		if(A[i]!=' ')
		{
			j=A[i]-'a';
			if(B[j]==-1)
			{
				C[k]=A[i];
				k++;
				B[j]=0;
			}
		}
		i++;
	}

	//mapping the string C with the alphabets and decoding the output
	//using the index of the C string and ASCII values we can decode the secret code

	//taking the input for the message
	char M[200];
	i=0;
	printf("Enter the message:\n");
	scanf("%c",&M[i]);
	while(M[i]!='\n')
	{
		i++;
		scanf("%c",&M[i]);
	}

	//traversing the message and storing the output
	char D[100];
	i=0;
	k=0;
	while(M[i]!='\n')
	{
		if(M[i]!=' ')
		{
			//function find the index of the element
			for(j=0;j<26;j++)
			{
				if(C[j]==M[i])
				{
					D[k]='a'+j;
				}
			}
		}
		else
		{
			D[k]=' ';
		}
		i++;
		k++;
	}


	//printing the output
	printf("Decoded message: ");
	k=0;
	i=0;
	while(M[i]!='\n')
	{
		printf("%c", D[k]);
		k++;
		i++;
	}
	printf("\n");


	return 0;
}
