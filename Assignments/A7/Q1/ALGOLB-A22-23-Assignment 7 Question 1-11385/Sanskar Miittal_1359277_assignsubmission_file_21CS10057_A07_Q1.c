#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/* Name: Sanskar Mittal
Roll No.: 21CS10057
System no.: 23
Assignnment 07 Q1*/

#define MAXNAME 50
#define TABLESIZE 26

typedef struct{
	char name[MAXNAME];
}struct_name;

int hash_table[TABLESIZE]={0};


void hash(char *key){

	int i=0,letter_count=0;
	int length = strnlen(key, MAXNAME);
	
	
	for(i=0;i<length;i++){
		if(hash_table[key[i]-'a']==0 && (key[i]>='a' && key[i]<='z')){
			hash_table[key[i]-'a']='a'+letter_count;
			letter_count++;
		}
	}

}

int main(){

	struct_name message;
	struct_name key;
	
	/*printf("Enter the key string: ");
	scanf("%[^\n]%*c",key.name);
	
	printf("Enter the message string: ");
	scanf("%[^\n]%*c",message.name);*/
	
	hash("eljuxhpwnyrdgtqkviszcfmabo");
	
	char message1[] = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";
	
	for(int i=0;message1[i]!='\0';i++){
	if(message1[i]==' '){
		continue;
	}
		printf("%c",hash_table[message1[i]]);
	}
	
	/*int a='b'+1;
	printf("%d",a);*/



}
