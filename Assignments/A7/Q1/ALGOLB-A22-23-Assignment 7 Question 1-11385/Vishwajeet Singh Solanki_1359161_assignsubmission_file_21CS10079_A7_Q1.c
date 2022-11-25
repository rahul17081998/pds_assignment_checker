/*NAME:VISHWAJEET SINGH SOLANKI 
ROLL NO :21CS10079
MACHINE NO:32
ASSIGNMENT:7*/

#include<stdio.h>
#include<string.h>

int main()
{
	char key[50];                                                                  // getting key input
	printf("KEY : ");
	fgets(key,50,stdin);
	
	char message[50];                                                              // getting key input
	printf("MESSAGE : ");
	fgets(key,50,stdin);
	
	int A[27]={-1};
	
	char decoded[50];
	
	int j=1;
	for(int i=0;key[i]!='\0';i++)                                   //traversing through key creating a hash table A
	{                                                               //in which index represent key char value and A[index]
		if((int)(key[i])==32)                                       //represent substitution order char value
		{
			continue;
		}
		else
		{
			if(A[(int)(key[i]) -96]==-1)                             //checking as repeated char should not come again
			{
				A[(int)(key[i]) -96]=j+96;
				j++;
			}
		}
	}
	for(int i=0;message[i]!='\0';i++)                             // traversing through message and inserting decoded message
	{
		if((int)(message[i])==32)
		{
			decoded[i]=' ';
		}
		else
		{
			decoded[i]=(char)A[(int)(message[i])-96];
		}
	}
	printf("Decoded Message : ");                                    //printing decoded message
	for(int i=0;decoded[i]!='\0';i++)
	{
		printf("%c",decoded[i]);
	}
	return 0;	
}
