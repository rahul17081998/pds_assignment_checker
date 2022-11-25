// NAME: SAMPREETH R S
//ROLL NO: 21CS30038
//DEPARTMENT: COMPUTER SCIENCE AND ENGINEERING
//PC NO: 19
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	char c='a',hash[26];//Hash table stores the key and its corresponding letter
	int count[26]={0};
	int i=0;
	printf("Key: ");
	c=getchar();
	while(c!='\n')//Storing the hashtable
	{
		if(c<='z'&&c>='a'&&count[c-'a']==0)
		{
			count[c-'a']++;
			hash[c-'a']='a'+i;
			i++;
		}
		c=getchar();
	}
	printf("Message: ");
	char message[1000];
	c=getchar();
	i=0;
	printf("Decoded message:\n");
	while(c!='\n')//Decoding and printing the message
	{
		if(c>='a'&&c<='z')
		{
			message[i]=hash[c-'a'];
			printf("%c",message[i]);
			i++;
		}
		else
		{
			message[i]=c;
			printf("%c",c);
			i++;
		}
		c=getchar();
	}
	message[i]='\0';
	printf("\n");
}
