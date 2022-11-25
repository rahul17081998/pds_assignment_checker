#include<stdio.h>
#include<string.h>

int main(){
	char key[1000],msg[1000];					//two char arrays to take string as input
	printf("key = ");					
	scanf("%[^\n]%*c",key);						//this enables to take space in a string
	printf("message = ");
	scanf("%[^\n]%*c",msg);
	int i=0;
	int sub[26];							//substitution table
	for(i=0;i<26;i++){
		sub[i]=-1;}
	int cnt=0;
	for(i=0;i<strlen(key);i++){
		if(sub[key[i]-97] == -1){				//if the letter in key is first occurence
			sub[key[i]-97]=cnt;				//value is assigned based on ordering of letters in key
			cnt++;
		}
	}
	printf("Decoded message: ");
	for(i=0;i<strlen(msg);i++){
		if(msg[i]==32){						//spaces are transformed to themselves
			printf(" ");}
		else
		printf("%c",sub[msg[i]-97]+97);}			//Each letter in message is substituted using substitution table
	printf("\n");
}
