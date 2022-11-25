#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Global array which stores the key
int key[26];

//returns the index where the value should be stored
int hashCoder(char c)
{
	return c - 'a';
}

//Takes the keystring, and assigns the values in the
//right place of the key array
void enterKey(char k[])
{
	int i;
	for(i = 0; i < 26; i++)
		key[hashCoder(k[i])] = i;
	printf("Key entered !!\n");
}

//Decoder of any string
void decoder(char message[])
{
	int n = strlen(message), i;
	char decode[n];
	for (i = 0; i < n; i++)
	{
		if (message[i] >= 'a' && message[i] <= 'z')
		{
			int j = message[i] - 'a';
			decode[i] = 'a' + key[j];
		}
		else if (message[i] == ' ')
		{
			decode[i] = ' ';
		}
		else
		{
			decode[i] = message[i];
		}
		
	}
	printf("%s\n",decode);
}

int main()
{
	int i,n;
	char k[26], message[1000] = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
	printf("key = ");
	fgets(k, 30, stdin);
	enterKey(k);
	printf("message = ");
	fgets(message, 1000, stdin);
	printf("decoded message= %s",message);
	decoder(message);
}