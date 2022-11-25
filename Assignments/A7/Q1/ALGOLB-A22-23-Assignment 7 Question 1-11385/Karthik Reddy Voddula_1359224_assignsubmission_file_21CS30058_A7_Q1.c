// Name : Voddula Karthik Reddy
//Roll No: 21CS30058
//Machine No: 29
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void decode(char H[],char message[],char output[])//function used to decode
{
	int i;
	for(i=0;message[i]!='\n';i++)
	{
		if(message[i]<'a'||message[i]>'z')output[i]=message[i];//if message doesnt have a small letter then we print it as it is in output
		else 
		{
			output[i]=H[(int)message[i]-(int)'a'];//else we print the decoded charecter
		}
		
	}
	output[i]='\n';
}
int main()
{
	char key[1000],message[1000],H[27],output[1000];
	int i,k,j=-1;
	k=0;
	printf("enter the key \n");
	scanf("%[^\n]",key);//taking key with spaces 
	getchar();
	printf("enter the message\n");//taking message with spaces
	scanf("%[^\n]",message);
	for(i=0;i<26;i++)H[i]='<';//inserting some character so as to know the code is not done already
	
	for(i=0;key[i]!='\n';i++)//mapping the key with correspoding alphabet
	{
		if(key[i]>'z'||key[i]<'a')continue;
		if(H[key[i]-'a']=='<')H[key[i]-'a']=++j+'a';
		
	}
	decode(H,message,output);//decoding the message
	printf("Decoded message : %s\n",output);
	return 0;
	
}

