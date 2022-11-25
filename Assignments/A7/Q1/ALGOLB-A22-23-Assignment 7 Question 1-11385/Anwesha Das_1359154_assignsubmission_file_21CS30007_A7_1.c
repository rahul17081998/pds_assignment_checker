#include<stdio.h>
#include<stdlib.h>

#define size 26 // size of hashtable

int hashtable[size]; // all values initialised to 0

int hash(char c)
{
	return (c-'a')%size; // to find the index of a character in the hashtable
}

void insert(char key[]) // to insert the keys in a hashtable
{
	int i, count = 0;
	
	for(i=0; key[i]!='\0', count<size;i++)
		{
			if(key[i]<='z' && key[i]>='a') // key should be lowercase alphabet only
			{
				if(hashtable[hash(key[i])]!=0) //if the index of the character already has a value 
					continue;
					
				else {
				hashtable[hash(key[i])] = count;// value is the position at which it appeared in the key given, starting from 0
				// for ex: if key starts from 'e', then hashtable[index of 'e'] = 0; 
				count++;//to increment the count
				}
			}
			
			else continue;
		}
}



int main()
{	
	int i, temp;
	char message[100], key[100];

	printf("Enter the key\n");
		scanf("%s", key);
	getchar();
	printf("Enter the message\n");
		scanf("%[^\n]%*c", message);
		
	insert(key); // to get the values assigned
		
	printf("Decoded message:\n");
		
	for(i=0; message[i]!='\0'; i++)
	{
		if(message[i]<='z' && message[i]>='a') //the character should be a lowercase alphabet
			{
			    temp = hash(message[i]); //storing the index in temp
				printf("%c", hashtable[temp] + 'a'); //printing the corresponding character
			}
			
		else printf("%c", message[i]);  
	}
	
	printf("\n");

	return 0;
}

