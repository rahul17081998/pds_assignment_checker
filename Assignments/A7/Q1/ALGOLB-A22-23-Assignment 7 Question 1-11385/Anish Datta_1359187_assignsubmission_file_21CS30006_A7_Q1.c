#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Name - Anish Datta
Roll No. - 21CS30006
Machine No. - 03
Department of Computer Science and Engineering
Assignment 7
*/

int main(){
	int hash[26];
	//this hash array stores the decoded letter at the correct index.
	//for ex, hash[2] = 4 means: an encoded letter 'c' = 'e' when decoded
	
	int i;
	for(i=0; i<26; i++) hash[i] = -1;  
	//initializing all to -1(not assigned)
	
	printf("\nEnter key: ");
	int pos = 0;
	
	while(1){      
	//loops until user inputs '\n', taking 1 character at a time
		char ch;
		scanf("%c", &ch);
		if(ch=='\n') break;
		else if(ch==' ') continue;   //any special character or space skips to next iteration
		else{
			int key;
			
			//key would store the key of the letter
			//for ex, a=0, b=1, C=2, D=4, etc.
			if(ch>='a' && ch<='z') key = ch-'a';
			else if(ch>='A' && ch<='Z') key = ch-'A';
			else continue;  //any special character or space skips to next iteration
			
			if(hash[key] != -1) continue;  //if already assigned
			
			hash[key] = pos;
			pos++;
		}
	}
	
	//for(i=0; i<26; i++) printf("%d %d\n", i, hash[i]);
	
	printf("Enter message: ");
	char ans[200];
	
	for(i=0; ; i++){
		char ch;
		scanf("%c", &ch);
		if(ch=='\n') break;   //loop breaks when user inputs '\n'
		
		//decoding the letter according the hash array obtained
		//case of each letter is retained from the message
		//if the character is not a letter, like ' ', '.', etc, then it is retained
		if(ch>='a' && ch<='z'){
			ans[i] = 'a' + hash[ch - 'a'];
		}
		else if(ch>='A' && ch<='Z'){
			ans[i] = 'A' + hash[ch - 'A'];
		}
		else{
			ans[i] = ch;
		}
	}
	
	printf("Decoded message: %s\n\n", ans);    //printing the required output
	
	return 0;
}
