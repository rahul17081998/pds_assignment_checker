#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char find(char c,char hash[])
{
int i=0;
for(i=0;i<26;i++)
{
	if(c==hash[i])
	break;
}

return (char)(97+i);

}
int main()
{
char key[999];

char hash[26];
int c=0;
printf("Input the key\n");
fgets(key,999,stdin);
for(int i=0;i<strlen(key);i++)
{
	if((int)key[i]>96 && (int)key[i]<123)
	{
		hash[c]=key[i];
		
		c++;
	}
	for(int j=i+1;j<strlen(key);j++)
		if(key[i]==key[j])
			key[j]='-';// to ensure non-repition of letters in the substitution table
}
printf("Input the message\n");
char message[999];
fgets(message,999,stdin);


for(int i=0;i<strlen(message);i++)
{	
	if(message[i]==' ')
		printf(" ");
	else if((int)message[i]>96 && (int)message[i]<123)
		printf("%c",find(message[i],hash));
}

}








