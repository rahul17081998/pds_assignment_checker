/* Name: Shivang Agrawal 
Roll No.-21CS30048
Department-Computer Science and Engineering
Machine Number-24
Assignment No.-7-Q1
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	int main(){
		int i=0;
		char key[100],message[100];
		//Taking the inputs
		printf("Enter key\n");
		for(i=0;i<27;i++){
			scanf("%c",&key[i]);
			}
		char table[26];
		//Creating the hashtable with index=key[i]-'a'
		for( i=0;i<26;i++){
			char x='a'+i;
			int y=key[i]-'a';
			table[y]=x;
		}
		i=0;
		printf("Enter the message and press enter after finishing the message\n");
		do{
			scanf("%c",&message[i]);
			i++;
		}while(message[i-1]!='\n');

		int len=i-1;
		char out[len+1];
		//Decoding message using hashtable of key
		for(i=0;i<=len;i++){
			if(message[i]!=' ')out[i]=table[message[i]-'a'];
			else out[i]=message[i];
			}
		//Printing the output
		printf("Decoded Message: ");
		out[len]='\0';
		puts(out);
		return 0;
	}
