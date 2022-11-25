// ROLLNO.:21CS10081
// NAME   :VONTERI VARSHITH REDDY
// COMPUTER SCIENCE AND ENGINEERING DEPARTMENT(B.TECH)
// MACHINE NO.: 33

//headers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
	char c;
}hash;
hash Table[26];

int code[26];


int Hashcode(char x){
	int y = x-'a';
	return code[y];
}


//main function
int main(){
	char key[1000];
	char message[1000];
	int freq[26];
	printf("Enter the key:");
	scanf("%[^\n]",key);
	getchar();
	printf("Enter the message:");
	scanf("%[^\n]",message);
	fflush(stdin);
	int k = strlen(key);
	int m = strlen(message);
	for(int i=0;i < 26;i++){
		freq[i] = 0;
				}
	int index = 0;
	int a ;
	for(int i=0;i < k;i++){
				a = key[i]-'a';
				if(key[i]>= 'a' && key[i] <= 'z' && freq[a] == 0){
						freq[a] = 1;
						code[a] = index;
						index++;
			                          		                 }
				}
	
	printf("The encoded message is:");
	for(int i=0;i < m;i++){
			if(message[i]>= 'a' && message[i] <= 'z'){
					Table[Hashcode(message[i])].c = 'a' + Hashcode(message[i]);
					printf("%c",Table[Hashcode(message[i])].c);
									}
			else if(message[i] == ' '){printf(" ");}
				}
		printf("\n");	
	
	return 0;
}
