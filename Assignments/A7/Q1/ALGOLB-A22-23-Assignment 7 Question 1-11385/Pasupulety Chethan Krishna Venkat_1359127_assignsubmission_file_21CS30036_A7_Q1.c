//implemention of hashing in c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define SIZE 26

//defining our struct node to contain the key and value
typedef struct node
{
    char key;
    char value;
   
}node;


 node *hashTable[SIZE];
 

//hashing fn
 int hashCode(char key)
{
	int x=(int) key;
    return x % SIZE;
}


//searching fn
 node *search(char key)
{
    int hashIndex = hashCode(key);
     node *temp = hashTable[hashIndex];
    return temp;
}


//insertion function
void insert(int key, int value)
{
     node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->key = key;
    newNode->value = value;
   
    int hashIndex = hashCode(key);
    if (hashTable[hashIndex] == NULL)
        hashTable[hashIndex] = newNode;
}


//fucntion to diplay the hashed table
void display()
{
    int i = 0;
    for (i = 0; i < SIZE; i++)
    {
        printf("(%c):",hashTable[i]->key );
         //node *temp = hashTable[i];
        //while (temp != NULL)
        //{
            printf(" -> %c", hashTable[i]->value);
            //temp = temp->next;
	printf("\n");
        }
        printf("\n");
    }


int main(){
	int i;
	int x=1;
	char key[MAX];
	char message[MAX];

	//taking input of the key
	printf("enter key:");
	fgets(key,MAX,stdin);
	
	//taking message input
	printf("enter message:");
	fgets(message,MAX,stdin);
	
	
	 int l1=strlen(key);
	 int l2=strlen(key);

	//initializing all hash pointers to null
	 for(i=0;i<SIZE;i++) hashTable[i]=NULL;
	
	//inserting the keys into the hash table 
	insert(key[0],'a');
	for(i=1;i<l1;i++){
		//if there is a space in between we skip it
		 if (key[i]==32) continue;
		//if the key isnt added previously we add it otherwise we skip it
		else if(search(key[i])==NULL) {insert(key[i],'a'+x); x++;}
		else continue;
		
	} 
	display();
	

	//printing the decoded message
	printf("The decoded message is:");
	for(i=0;i<l2;i++){
		if(message[i]==32) printf("%c",32);
		else {
		node* temp=search(message[i]);
		printf("%c",temp->value);

}

}

return 0;


}


