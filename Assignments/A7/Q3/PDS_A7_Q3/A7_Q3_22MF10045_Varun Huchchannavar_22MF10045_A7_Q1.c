/* Name: Varun Huchchannavar
   Section:14
   Roll No: 22MF10045 */	
	#include<stdio.h>
	#include<stdlib.h>
	int main()
	{
	 char a[50],b[50];
	scanf("%s",a);
	scanf("%s",b);
	int i,j,m;
	for(i=0;i<50;i++)
	{
	for(j=0;j<50;j++)
	{
	if(a[i]==b[j])
	{
	m=1;
	break;
	}
	else
	{
		m=0;
	}
	
}
	}

if(m==0)
{
	printf("Anagram");
	}
	else
	{
	printf("Not Anagram");
	}
	return 0;
}

	
	
	
	
	
	
