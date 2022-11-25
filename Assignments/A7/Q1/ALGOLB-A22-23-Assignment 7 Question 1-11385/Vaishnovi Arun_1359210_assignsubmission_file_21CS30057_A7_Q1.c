/*NAME- VAISHNOVI ARUN
ROLL NO-21CS30057
MACHINE NO- 79*/

#include<stdio.h>
#include<string.h>



struct node					/*node created to store the encryption, i.e., to make the hash table*/
{
	
	char corr_alph;				/*corresponding alphabet in the range a-z is stored*/								
	int count;				/*number of times any letter occurs in the key*/

};


int main()
{
	char key[1000];				/*key and message are stored*/
	char message[1000];
	char encr_message[1000];

	printf("key = ");
	scanf(" %[^\n]",key);
	printf("message = ");
	scanf(" %[^\n]",message);

	int l1=strlen(key);
	int l2=strlen(message);

	struct node table[26];
	
	int i;
	
	for(i=0;i<26;i++)
	table[i].count=0;			/*count of all letters is initialized to zero at first*/

	int counter=0;				/*to keep track of the next alphabet*/

	for(i=0;i<l1;i++)
	{
		char ch=key[i];
		int num=ch-97;
		if(ch>=97 && ch<=122)				/*hash table is created*/
		{
			if((table[num].count)==0)
			{	
				table[num].corr_alph= 97+counter;
				counter++;
				(table[num].count)++;
			}
			else
			(table[num].count)++;
		}
	}

	
	for(i=0;i<l2;i++)						/*de-encryption done to find out decoded message*/
	{
		char ch2=message[i];
		int num2=ch2-97;
		if(ch2>=97 && ch2<=122)
		encr_message[i] = table[num2].corr_alph;
		else
		encr_message[i]=ch2;
	}
	
	encr_message[l2]='\0';
	
	printf("Decoded message : %s\n",encr_message);		/*decoded message is printed*/


	return 0;

}

