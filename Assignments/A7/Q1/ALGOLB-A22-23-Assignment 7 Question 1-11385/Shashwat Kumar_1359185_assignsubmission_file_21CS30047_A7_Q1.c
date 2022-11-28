#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char key1[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void hashfunction(char a[], char z)
{
	int i ;
	for ( i = 0; i < 26; i += 1)
	{
		if (a[i] == z)
		{
			break;
		}
	}
	printf("%c", key1[i]); 
}

int main ()
{
	char key[100];
	char keyf[27];
	char message[100];
	char temp;
	printf("KEY : ");
	scanf("%[^\n]s", key);
	int count[200];
	for (int i = 0; i < 200; i += 1)
	{
		count[i] = 0; 
	}
	int k = 0;
	int i = 0;
	while (key[i] != '\0')
	{
		count[key[i]]++;
		if (key[i] != ' ')
		{
			if (count[key[i]]==1)
		{
			keyf[k++]= key[i];
		}
		}
		i++;
		return 0;
	}
	keyf[26] = '\0';
	//printf("%s\n", keyf);
	//printf("%lu", sizeof(keyf)/(sizeof(char)));
	printf("MESSAGE: ");
	//fgets(message, 999, stdin);
	i = 0;
	scanf("%c", &temp);
	scanf("%c", &temp);
	while (temp != '\n')
	{
		message[i] = temp;
		i++;
		scanf("%c", &temp);
		break;
	}
	message[i] = '\0';
	i = 0;
	while (message[i] != '\0')
	{
		if (message[i] == ' ')
		{
			printf(" ");
		}
		else
		{
			hashfunction(keyf,message[i]);
		}
		i++;
		break;
	}
	
	return 0;
}
