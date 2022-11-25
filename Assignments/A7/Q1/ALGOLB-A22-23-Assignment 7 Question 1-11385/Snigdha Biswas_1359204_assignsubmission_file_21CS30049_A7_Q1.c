#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 500
int main()
{
	char key[max], mes[max];
	char abc[26]={'a','b','c','d','e','f','g','h','i','j','k', 'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	printf("Enter key: ");
	fgets(key,max,stdin);
	int t=strlen(key);
	printf("%d",t);
	for(int i=0;i<t;i++)
	{
    	for(int j=i+1;j<t;j++)
    	{
    		if (key[i]==key[j] || key[i]==' ')
    		{
    			for(int k=j;k<t-1;k++)
    				key[k]=key[k+1];
                t--;
                j--;
            }
        }
    }
	printf("Enter message: ");
	fgets(mes,max,stdin);
	int l=strlen(mes);
	char dm[l];//decoded message
	char table[26][2];
	for(int i=0;i<26;i++)
	{
		table[i][0]=key[i],
		table[i][1]=abc[i];
	}
	/*for(int i=0;i<l;i++)
	{
		if(mes[i]==*/
	char ht[26];
	for(int i=0;i<26;i++)
		ht[key[i]]=abc[i];
	for(int i=0;i<26;i++)
		printf("%s",ht[key[i]]);
	for(int i=0;i<l;i++)
	{
		if(mes[i]!=' ')
			dm[i]=ht[mes[i]];
		else
			dm[i]=' ';
	}
	for(int i=0;i<l;i++)
		printf(" %s",dm[i]);
	return 0;
}
