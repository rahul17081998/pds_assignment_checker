/* Name: Dhruv Agja
Roll no.: 21CS10022
Dept.: Computer Science & Engineering
Machine no: 44 */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct encrypt{
	char key;
};
struct encrypt hashTable[26];
char output[200];

// to search for the letter according to hashtable
int search(char ch)
{	
	int i;
	for(i=97; i<123; i++){
		if (ch == ' ')
			return 32;
		if(hashTable[i].key == ch){
			return i;
		}
	}
}

void decode(char mesg[])
{
	int num;
	int i=0, j=0;
	while(mesg[i] != '\n'){
		char ch = mesg[i];
		num = search(ch);
		//printf("\n num = %d \n", num);
		char temp = num;
		output[j] = temp;	
		//printf("%c", output[j]);

		j++;
		i++;
	}
}

int main()
{

	int i;
	char mesg[200], c;	
	
	printf("message = ");

	fgets(mesg, 200, stdin);

	// NOTE: key is taken input afterwards as it was not able to take input of mesg array
	printf("key = ");

	// we start from 97 as it is the ASCII code for the letter 'a', and 122 for 'z'
	// by this we map the key to alphabets
	for(i=97; i<123; i++){
		scanf("%c", &hashTable[i].key);
	}	
	
	decode(mesg);
	
	printf("\nDecoded message: %s \n", output);	
	return 0;
}
