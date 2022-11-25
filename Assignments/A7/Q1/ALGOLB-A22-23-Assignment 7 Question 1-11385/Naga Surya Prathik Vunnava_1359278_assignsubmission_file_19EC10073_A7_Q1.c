#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char key[1000]; //Taking key input
	gets (key);
	char msg[1000]; //Taking message input
	gets (msg);
	int map[27]; //Declaring an array to map the first 26 lower-case alphabets
	int i;
	for(i=1;i<27;i++) //Initializing the map to 0s
	{
		map[i]=0;
	}
	int n = strlen(key);
	int j=1;
	for(i=0;i<n;i++) //mapping every character in key to an alphabet
	{
		if(key[i]!=' ' && map[key[i]-'a'+1]==0)
		{
			map[key[i]-'a'+1] = j;
			j++;
		}
	}
	int m = strlen(msg);
	printf("Decoded message: \"");
	for(i=0;i<m;i++) //DECODING THE INPUT MESSAGE using the mapped values
	{
		if(msg[i] == ' ')
		{
			printf("%c",' ');
		}
		else
		{
			printf("%c",map[msg[i]-'a'+1] + 'a' - 1);
			
		}
	}
	printf("\"\n");
}
