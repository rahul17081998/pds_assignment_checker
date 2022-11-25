/*
Name: Banothu Karthik
Roll no: 21CS10013
*/

#include<stdio.h>


int hash(char key)
{
	return (key%26)+1;
}

//function that search the key in the code and printf the corresponding value
void search(char s[],char h[])
{
	int i=0;
	while(s[i]!='\0')
	{
		int x=s[i];
		if(x==32)
			printf(" ");
		else{
			int index=hash(s[i]);
			printf("%c",h[index]);
		}
		i++;
	}
	printf("\n");
}

int main()
{
	char s[]="eljuxhpwnyrdgtqkviszcfmabo";
	char m[]="zwx hnfx lqantp mnoeius ycgk vcnjrdb";
	
	char HT[27]={'\0'};
	int i=0;
	int j=97;
	while(s[i]!='\0')
	{
		int x=s[i];
		if(x!=32){
		int index=hash(s[i]);
		if(HT[index]=='\0')
		{
			HT[index]=j;
			j++;
		}
		}
		i++;
	}
	search(m,HT);
	return 0;
	
	
}
