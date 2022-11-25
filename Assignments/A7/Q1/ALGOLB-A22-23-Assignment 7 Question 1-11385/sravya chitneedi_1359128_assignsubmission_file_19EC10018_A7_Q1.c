#include<stdio.h>
#include<string.h>

int main()
{
	char key[100],msg[100];
	printf("key= ");
	scanf("%[^\n]%*c",key);			//%[^\n]%*c allows you to take string with spaces
	printf("message= ");
	scanf("%[^\n]%*c",msg);
	int i=0;
	int x[26];
	for(i=0;i<26;i++)
	{
		x[i]=-1;			//initialising an intermediate array(substitution table) with -1 to map key and messages
	}
	int cnt=0;
	for(i=0;i<strlen(key);i++)
	{
		if(x[key[i]-'a']==-1) 		//asci values  of lowercase alphabets is 97 to 122
		{
			x[key[i]-'a']=cnt;	//this will give the place of your alphabet in key in an alphabetical order
			cnt++;			//eg:key=edcba  array x= 4 3 2 1 0 i.e a in 4th position,b in 3rd etc
		}
	}
	printf("Decoded message: ");

	for(i=0;i<strlen(msg);i++)
	{
		if(msg[i]==' ') 			//ascii value of space =32
		{
			printf(" ");
		}	
		else 
		printf("%c",x[msg[i]-'a']+'a');	//printing output string 

	}
	printf("\n");

}
