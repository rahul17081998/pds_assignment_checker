#include<stdio.h>
#include<stdlib.h>
/*
name-Soukhin Nayek
Roll-21CS10062
Question-1
*/

int main(){
	char key[35];
	char message[50];
	int hashtable[26];
	int n,i =0,j=0;
	char c; 
	//taking the input key from user 
	printf("Enter the key: ");
	scanf("%c",&c);
	while(c!='\n'){
		key[i++]=c;
		scanf("%c",&c);
	}
	key[i]='\0';
	
	//taking the message from the user
	printf("Enter the message: ");
	scanf("%c",&c);
	while(c!='\n'){
		message[j++]=c;
		scanf("%c",&c);
	}
	message[j]='\0';
	
	//initialize the hashtable 
	for(n=0;n<26;n++){
		hashtable[n]=-1;
	}
	
	//filling the hashtable 
	int count=0;
	for(n=0;n<i;n++){
		if(hashtable[key[n]-'a']!=-1 || key[n]==' ')   //we are checking if it is already mapped 
			continue;
		hashtable[key[n]-'a']=count++;   // we are maping it to the next alphabet 
	}
	//decoding the message with the hashtable 
	printf("Decoded message: ");
	for(n=0;n<j;n++){
		if(message[n]==' '){
			printf(" ");
			continue;
		}
		printf("%c",'a'+hashtable[message[n]-'a']);
	}
	printf("\n");
	return 0;
}
