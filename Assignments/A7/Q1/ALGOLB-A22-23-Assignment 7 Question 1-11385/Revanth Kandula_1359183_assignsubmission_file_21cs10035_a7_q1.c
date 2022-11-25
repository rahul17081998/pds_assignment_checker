/*name : Kandula Revanth
roll no : 21CS10035
dept : CSE 
machine no : lab-5 no-67*/

#include<stdio.h>


int main()
{

	char key[50],message[50],hash[26],decode[50];
	int binhash[26],num,num1,i;
	char z='a';
	//asking user for key and message
	printf("enter key : ");scanf("%[^\n]s",key);getchar();
	printf("enter message : ");scanf("%[^\n]s",message);getchar();
	// int binhash[] array is used to ensure the same keys are not used again
	for(i=0;i<26;i++)binhash[i]=0;

	// hashing	
	for(i=0;key[i]!='\0';i++)
	{
		num=key[i]-'a';
		if((binhash[num]==0)&&(num>=0)&&(num<26))
		{
			hash[num]=z;
			z++;
			binhash[num]=1;
		}
	}
	// decoding
	for(i=0; message[i]!='\0'; i++)
	{
		num1=message[i]-'a';
		if((num1<26)&&(num1>=0))
		{
			decode[i]=hash[num1];
		}
		else {decode[i]=message[i];}
	}decode[i]='\0';

	printf("%s",decode);
}