#include<stdio.h>
#include <string.h>

int main()
{
	int trail[26]={0};
	/*char key[50];
	char message[50];
	scanf("%[^\n]*c",key);
	//printf("%s\n",key);
	scanf("%[^\n]*c",message);
	//printf("%s\n",message);*/

	char key[50] = "the quick brown fox jumps over the lazy dog";
	char message[50] = "vkbs bs t suepuv";

	int n = strlen(key);
	int i=0;
	int j=0;
	int count=0;
	for(;i<n & j<26;i++)
	{
		if(key[i]!= ' ' && trail[key[i]-'a']==0 ){
			trail[key[i]-'a'] = count+'a';
			j++;
			count++;
		}
	}
	/*for(i=0;i<26;i++)
	{
		printf("%c", trail[i]);
	}
	//printf("\nlol");*/
	int lol = strlen(message);
	char result[lol];
	for(i=0;i<lol;i++)
	{
		char t = message[i];
		if(t ==' ') result[i] = t;
		else
		{
			int that = t-'a';
			result[i] = trail[that];
		}
	}
	printf("Decoded message: \"");
	for(i = 0;i<lol;i++)
	{
		printf("%c",result[i]);
	}
	//printf("\nlol");
	printf("\"\n");
	return 0;
}
