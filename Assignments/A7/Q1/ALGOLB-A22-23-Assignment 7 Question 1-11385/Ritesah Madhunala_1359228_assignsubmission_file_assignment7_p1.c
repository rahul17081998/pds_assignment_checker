
/*
Name:Ritesah Madhunala;
Roll No:21CS30042;
Dept:Computer Science and engineering Dual degree course;
Machine no:21;
*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node{
	char decode;
	char value;
	struct node*next;//structure as per needed
};

struct node*HashTable[26];

void insert(char decode){//inserting the alphabets according to ascii key
	int size=0;
	printf("%c",decode);
	int key=decode-'a';//choosing the key as this
	printf("%d",key);//fine till here
	
	int index=key%26;
	struct node*temp=HashTable[index];
	
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	
	
	HashTable[size]->value='a'+size;
	newnode->next=NULL;
	if(temp==NULL){//if temp empty then add a new node and store data of key here
		HashTable[index]->next=newnode;
		newnode->key=key;
		size++;
	}else{
		while(temp->next!=NULL){
		temp=temp->next;//if temp not empty travesing untill we reach the end of the pointer and add a new node there
		}
		temp->next=newnode;
		newnode->decode=decode;	
	};
	
	return;
};


void display(struct node*HashTable[],int n){//display function which prints the values that are stored in the table
	int i;
	
	for(i=0;i<n;i++){
		struct node*temp=HashTable[i];
		if(temp==NULL){
			printf("not null");
		}else{
			while(temp->next!=NULL){
			printf("%c",temp->decode);
			temp=temp->next;
			}
		}
		
	}
	
};





int main(){
	int n;
	int i;
	printf("Enter the no of letters in the key");
	scanf("%d",&n); 
	char arr[n];
	
	scanf("%s",arr);
	
	for(i=0;i<n;i++){
		char temp=arr[i];
		printf("entered loop");
		insert(temp);//insertng the alphabets one by one
	}
	
	
	display(HashTable,26);

	//from here we will get the message input one by excluding the spaces and search for the required letter's corresponding letter and decode it here the corresponding decoded letter is stored as 'size' in hash table's row which will indicate the letters a,b,c in order 

	
}



//26 is the size of input in  the test case given in the assignment
