//NAME:GUNDA CHARU VIKRAM SUBHASH
//ROLL NO:21CS30022



#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int search(char a,char m[2][26],int k)
{
	int i,b=0;
	for(i=0;i<k;i++)
	{
		if(m[0][i]==a)
			b=-1;
	}
	return b;
}

char decode(char m[2][26],char a)
{
	int i,c;
	
		for(i=0;i<26;i++)
		{
			if(m[0][i]==a)
				c=i;
		}
		return m[1][c];
	
}

int main()
{
	int i,n,j=0,p;
	char key[100];
	printf("key= ");
	scanf("%s",key);
	n=strlen(key);
	char code[2][26];
	for(i=0;i<n;i++)
	{
		if(key[i]==' ')
			continue;
		if(search(key[i],code,j)!=-1)
		{
			code[0][j]=key[i];
			code[1][j]=(char)(j+97);
			j++;
		}
	}
	printf("message= ");
	char message[100];
	scanf("%s",message);
	p=strlen(message);
	printf("%d",p);
	char dmessage[p];
	for(i=0;i<p;i++)
	{
		dmessage[i]=decode(code,message[i]);
	}
	for(i=0;i<p;i++)
	{
		printf("%c",dmessage[i]);
	}
}
// i am unable to handle the space in the message ,please input the message without space
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		



