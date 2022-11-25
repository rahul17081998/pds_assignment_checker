//21CS10031
//Harsh Vardhan
//1

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int convrt(char y, char* key)
{
	int x = 0;
	while(key[x] != y)
	{
		x++;
	}
	return x;
}
//Function to convert a character to its position in the key
//ascii code a = 97

void decode(char* str, char* key)
{
	int x = strlen(str);
	// char* output = (char*)malloc(x*sizeof(char));

	for (int i = 0; i < x; i++)
	{
		if( str[i] == ' ' )
			printf(" ");
		else
			printf("%c", 97 + convrt(str[i], key) );
	}
}
//Function to print the decoded message by converting each character from key to english alphabet

int main()
{
	char* key = (char*)malloc(27*sizeof(char));
	printf("Enter the key\n");
	scanf("%s", key);

	// char* key = "eljuxhpwnyrdgtqkviszcfmabo";

	char* mssg = (char*)malloc(200*sizeof(char));
	printf("Enter the message\n");
	gets(mssg); 
	//Input method so that space character can also be taken

	// printf("%s\n", mssg );

	printf("Decoded message: ");
	decode(mssg, key);
}


//"zwx hnfx lqantp mnoeius ycgk vcnjrdb"