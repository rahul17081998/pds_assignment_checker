/* Name: Barun Parua
Roll no. :21CS10014
Dept: Department of Computer Science and Engineering
Machine no. : 40*/

#include <stdio.h>
#include <string.h>

// final output not coming correct due to some error in mapping with ascii codes

int main()
{
	int k,m,i,ht[26],kc1,htn[26];
	char kc;
	for (i=0;i<26;i++)
	{
		htn[i]=ht[i]=0;
	}
	// creating a hash table of size 26 and an auxiliary array to store how many times a character repeats in the key and initialised
	printf("Enter the length of the key with spaces : ");
	scanf("%d",&k);
	char ka[k+1];
	printf("Enter the key : ");
	for (i=0;i<=k;i++)
	{
		scanf("%c",&ka[i]);
	}
	printf("Enter the length of the message with spaces : ");
	scanf("%d",&m);
	char ma[m+1];
	printf("Enter the message : ");
	for (i=0;i<=m;i++)
	{
		scanf("%c",&ma[i]);
	}
	// taking the key and the message as input in character array, including an extra space to account for the new line
	int a=0;
	for (i=0;i<k;i++)
	{
		if (a>26) break;
		kc=ka[i];
		if (kc==' ') continue;
		kc1=kc-97;
		if ((htn[kc1]==0)&&(ht[a]==0)) 
		{
			ht[kc1]=a++;
			htn[kc1]++;
		}
	}
	// taking kc as the key character and hashing it if htn at that place is equal to zero for first occurence and then incremeting a
	// a denotes the a b c d sequence so that mapping is one to one
	// manipulating a as an integer for the ascii codes
	/*
	for (i=0;i<=k;i++)
	{
		printf("%c",ka[i]);
	}
	for (i=0;i<=m;i++)
	{
		printf("%c",ma[i]);
	}
	*/ // checking if the input string is taken properly
	printf("\nDecoded Message is : ");
	for (i=0;i<m;i++)
	{
		kc=ma[i];
		kc1=kc-97;
		if (kc==' ') printf(" ");
		else printf("%c",97+ht[kc1]);
	}
	printf("\n");
	// finally checking and printing the final message using the key
}
