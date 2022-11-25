#include<stdio.h>
#include<string.h>
int main()
{
	char A[100], Code[26][2], Key[26], M[100], a;
	int k=0;
	printf("Print the key: \n");//Taking the input for the key
	int i=0, flag = 0 ;
	int max;
	fgets (A, 100, stdin);//Getting the string input
	max = strlen(A);
	for(int m=0;m<max-1;m++)
	{	
		if(A[i] == ' ')//ignoring the spaces and storing the rest of non repeaking keys into another array, Key
		{
			i++;
			continue;
		}
		for(int j=0;j<k;j++)
		{
			if(A[i] == Key[j]) flag =1; //If there is a previous match already, ignoring that particular key
		}
		if(flag != 1)
		{
			Key[k] = A[i]; //Reserving space for that particular letter in the hash table if it was not repeated before this occurence
			k++;
		}
		i++;
		flag = 0;
	}
	for(int j=0;j<26 && j<k;j++)
	{
		Code[j][0] = Key[j]; // Writing the coded alphabet and its decoded alphabet in a array
		Code[j][1] = 'a'+j;
	}
	char H[26][2];
	for(int j=0;j<26;j++)
	{
		H[Code[j][0]-'a'][0] = Code[j][0];//Now creating a hash table with key and the decoded alphabet
		H[Code[j][0]-'a'][1] = Code[j][1];
	}
	printf("Enter the message:\n");
	fgets (M, 100, stdin);//Taking input for the message
	max = strlen(M);
	for(int m=0 ; m < max-1; m++)
	{
		if(M[m] == ' ') printf(" "); // Translating the spaces as they are
		else
		{
			printf("%c", H[M[m] - 'a'][1]); //Printing the decoded alphabet from the hash table
		}
	}
	return 0;
}
