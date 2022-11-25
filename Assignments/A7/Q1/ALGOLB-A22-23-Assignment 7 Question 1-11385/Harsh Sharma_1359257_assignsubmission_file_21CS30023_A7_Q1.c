//  HARSH SHARMA
//  21CS30023
//ASSIGNMENT 7 Q1


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 26

int count=0;

struct node{  //each node will contain key, avlue pairs
	char key;
	char value;
};

struct node* hasht[size]; // array of structure node

int hashfun(char key){
	int p=key;
	return p-97; // hash function defined like that so that every key will have unique index, no collision
}

int search(char key){
	int index=hashfun(key);

	if(hasht[index]==NULL) return 1;
	else return 0;

}

void insert(char keya,char valueb){

	struct node* temp= (struct node*)malloc(sizeof(struct node));
	temp->key=keya;
	temp->value=valueb;
	
	int index=hashfun(keya);

	hasht[index]=temp;
	
}

void printht(){
	for(int i=0;i<size;i++){
	if(hasht[i]!=NULL)
		printf("decode for character: %c is %c \n",hasht[i]->key,hasht[i]->value);
	}
}
int main(){

	printf("Key: \n");
	char str[100];
	int i=0;
	char ch;
	for(i;i<100;i++){
		scanf("%c",&ch);
		if(ch=='\n') break;
		str[i]=ch;
	}
	str[i]='\0';

//printf("%s",str);
	printf("\n");

	ch='a';
	i=0;

	while(ch<='z'){

		if(str[i]==' '){ 

		i++;
		continue;	
		}
		if(search(str[i])!=0){
			insert(str[i],ch);
			i++;
			ch++;

		}
		else{
			i++;
		}

	}

//printht();

	printf("Message: \n");
		char message[100];
		i=0;
		char ach;
		for(i;i<100;i++){
			scanf("%c",&ach);
			if(ach=='\n') break;
			message[i]=ach;
		}
	message[i]='\0';

//printf("%s",message);

	printf("\nDecoded Message: \n");
	char dmessage[100];
	i=0;
//printf("%c",hasht[1]->key);
	for(i;i<100;i++){

		if(message[i]=='\0'){
			dmessage[i]='\0';
			break;
		}
		if(message[i]==' '){
	 	dmessage[i]=' '; 
		continue;
		}

	int index=hashfun(message[i]);
	dmessage[i]=hasht[index]->value;

	
	}
	i=0;
	for(i;i<100;i++){
		if(dmessage[i]=='\0') break;

		printf("%c",dmessage[i]);
	}





	





	return 0;
}














