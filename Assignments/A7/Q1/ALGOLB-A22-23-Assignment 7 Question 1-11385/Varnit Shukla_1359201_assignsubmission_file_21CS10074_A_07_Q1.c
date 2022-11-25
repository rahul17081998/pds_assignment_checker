#include<stdio.h>
#include<stdlib.h>
/*Name: Varnit Shukla
Roll No.: 21CS10074
System No.: 70*/	
int main()
{
	char code[26];
	size_t maxsize=52;
	int i=0,j=0;
	printf("key = ");
	char *key = (char *)malloc(52*sizeof(char));
	getline(&key,&maxsize,stdin);
	printf("message = ");
	char *message = (char *)malloc(52*sizeof(char));
	getline(&message,&maxsize,stdin);
	for(j=0;j<26;j++)
		code[j]=-1;
	j=0;
	while(1)
	{
		if(key[i]<97 || key[i]>122)
		{
			i++;
			continue;
		}
		if(code[key[i]-97]==-1)
		{
			code[key[i]-97]=97+j;
			j++;
			i++;
		}
		else i++;
		if(j==26)
			break;
	}
	i=0;
	j=0;
	while(message[i]!='\n')
	{
		if(message[i]<97 || message[i]>122)
		{
			i++;
			continue;
		}
		message[i] = code[message[i]-97];
		i++;
	}
	printf("\nDecoded message: ");
	for(i=0;message[i]!='\n';i++)
		printf("%c",message[i]);
	printf("\n");
	return 0;
}
