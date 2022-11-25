#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int i;
	char key[100];
	char msg[100];
	printf("Enter the key : ");
	scanf("%[^\n]%*c", key); // Key input
	printf("Enter the message : ");
	scanf("%[^\n]%*c", msg); // Msg input
	int found[26];
	for(i=0;i<26;i++){
		found[i]=0; // Stores whether ith char has already appeared in key or not
	}
	char t[26];
	int len=0;
	char hashtable[26];
	i=0;
	while(key[i]!='\0'){
		if(key[i]==' '){
			i++;
			continue;
		}
		// If key not found earlier, just map it with next character
		if(found[key[i]-'a']==0){
			found[key[i]-'a']=1;
			t[len++]=key[i];
		}
		i++;
	}
	// Reverting the table t to create the hashtable
	for(i=0;i<26;i++){
		hashtable[t[i]-'a']=i+'a';
	}
	printf("Decoded message : \n");
	i=0;
	// Printing the decoded message
	while(msg[i]!='\0'){
		if(msg[i]==' '){
			printf(" ");
		}
		else{
			printf("%c",hashtable[msg[i]-'a']);
		}
		i++;
	}
	printf("\n");
	return 0;
}
