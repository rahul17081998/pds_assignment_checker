/****
Name = Tanishq Prasad
Roll no. = 21CS30054
System number = 27
email = tanishqprasad1010@kgpian.iitkgp.ac.in
*****/
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	int i, T[26];
	char msg[500];           // maximum size of key and message is taken as 500
    char ch[500];

	printf("Enter the key: ");
	scanf("%[^\n]%*c",ch);
    printf("Enter the message: ");
	scanf("%[^\n]%*c",msg);


	for(i=0;i<26;i++)
		T[i]=-1;

	int k=0;

	for(i=0;i<26;)
	{
	    int n = (int)ch[k++];
	    if (n>96 && n<123 && T[n-97]== -1)
	    {
	    	T[n-97]=i;
	    	i++;
	    }
	}


	i=0;
	int len = strlen(msg);
	printf("Decoded message: ");

	while(i<len)
	{
	    int n = (int)msg[i++];
	    if(n>96 && n<123)
	    	printf("%c",(char)(T[n-97]+97));
	    else
	    	printf("%c",msg[i-1]);
	}

	printf("\n");


}