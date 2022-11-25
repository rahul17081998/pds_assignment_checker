/*
	    Name : Meduri Harshith Chowdary
         Roll No : 21CS10042
      Department : Computer Science and Engineering
*/

#include <stdio.h>
#include <stdlib.h>

// defining some constraints over Sizes
#define SIZE 26
#define KEYMAX 50
#define MSGMAX 150

// defining node with key and value it stores
struct node{
	char key;
	char value;	
};

// defining a simple hash function which returns the ASCII(key)-97
int hash_function(char key){
	//printf("%d ",key-97);
	return (key-97);
}

int main(){
	
	int i=0;

	// dynamically allocated hashtable to store pointers to nodes
	struct node ** hashtable = (struct node **)malloc(SIZE*sizeof(struct node *));
	//struct node * hashtable[SIZE];

	// dynamically allocated Key and msg strings to get input
	char * Key=(char *)malloc(KEYMAX);
	char * msg=(char *)malloc(MSGMAX);

	// taking input Key, Note: Kingly give input without any ' or " at the beginning or at the end
	printf("Key : ");
	scanf("%c",Key+i);
	while(Key[i]!='\n'){
		i++;
		scanf("%c",Key+i);
	}
	Key[i]='\0';

	// taking input msg, Note: Kingly give input without any ' or " at the beginning or at the end
	i=0;
	printf("Message : ");
	scanf("%c",msg+i);
	while(msg[i]!='\n'){
		i++;
		scanf("%c",msg+i);
	}
	msg[i]='\0';

	//printf("%s\n%s\n",Key,msg);

	i=0;
	
	// ind to keep track of alphabets being assigned to keys
	int ind=0;

	// assigning keys to the hashtable
	while(Key[i]!='\0'){

		// if Key[i]==' ' i.e., an empty space then do nothing
		// if hashtable is already filled at that index we have a repeated key which had been taken care of previously
		if (Key[i]!=' ' && hashtable[hash_function(Key[i])]==NULL){

			// creating a temporary node temp to store key and value of encryption 
			struct node * temp = (struct node *)malloc(sizeof(struct node));
			temp->key = Key[i];
			temp->value = (char)(97+ind);

			// incrementing ind so that we assign next alphabet to next key
			ind++;
			
			// filling into hashtable
			hashtable[hash_function(Key[i])] = temp;

		}
		
		i++;		
	}	
	
	i=0;

	// printing Decoded Message
	printf("Decoded Message : ");

	while(msg[i]!='\0'){

		// if empty space print the same
		if (msg[i]==' ') printf("%c",msg[i]);

		// else print the value of key acc to hashtable
		else printf("%c",hashtable[hash_function(msg[i])]->value);
		i++;

	}

	printf("\n");

	// freeing the dynamically allocated arrays and strings
	free(hashtable);
	free(Key);
	free(msg);

	return 0;
}
