/*Name: Vinayak Gupta
Roll no. 21CS10077
Assignment 7*/
#include<stdio.h>
#include<string.h>
int main()
{
	char key[30];
	printf("Key= ");
	fgets(key,30,stdin);
	char mess[50];
	printf("Message= ");
	fgets(mess,50,stdin);
	printf("Decoded message = ");
	for(int i=0;mess[i]!='\0';i++)
	{
		int j;
		if(mess[i]>=97&&mess[i]<=122)
		{
			for(j=0;key[j]!=mess[i];j++)
			{
				continue;
			}
			printf("%c",j+97);
		}
		else
		printf("%c",mess[i]);
		
	}
	return 0;
}
