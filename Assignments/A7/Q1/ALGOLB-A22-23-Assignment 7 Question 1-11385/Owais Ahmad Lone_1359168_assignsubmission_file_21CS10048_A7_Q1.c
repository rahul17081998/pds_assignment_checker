/*
Name: Owais Ahmad Lone
Roll no: 21CS10048
Dept: Computer Science and Engineering
Machine No: 57*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
//defining the variables
	char key[1000];
	char message[1000];

//scanning the key and message
	scanf("%[^\n]%*c",key);
	scanf("%[^\n]%*c",message);

//maintainig a boolean array to keep a record of whther the key element is mapped or not	
	int boolean[1000];
	int i,j,k;

//finding the length of key string and message string	
	int key_length=0;
	for(i=0;i<1000;i++){
		if(key[i]!='\0') key_length++;
		else break;
	}
	
	int msg_length=0;
	for(i=0;i<1000;i++){
		if(message[i]!='\0') msg_length++;
		else break;
	}
//initialise the boolean array elements to 0	
	for(i=0;i<1000;i++){
		boolean[i]=0;
	}
//create a hashtable which maps all the alphabets from a to z according to key	; update boolean accordingly
	char hashtable[26];
	i=0,j=0;
	while(i<key_length){
	if(boolean[i]==0&&key[i]!=' '){
		hashtable[(int)(key[i]-'a')]=(char)('a'+j);
		j++;
		boolean[i]=1;
	}
	i++;
}

//now decode the message using the hashtable	
	for(i=0;i<msg_length;i++){
		if(message[i]!=' '){
			message[i]=hashtable[(int)(message[i]-'a')];
		}
	}
//printing the hashtable and the final decoded message
	printf("\n********hashtable**********\n");	
	printf("%s",hashtable);
	printf("\n********decoded message**********\n");
	for(i=0;i<msg_length;i++){
		printf("%c",message[i]);
	}
	printf("\n******************\n");
	return 0;
}	

