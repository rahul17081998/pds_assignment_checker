/*Name : Ishan Raj
 Roll No : 21CS10032
 Dept : Department of Computer Science & Engineering
 Machine No. : 49
 Question No. : A07_Q01
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 100

char key[SIZE],message[SIZE],HT[26];//HT is the hash table to be used

bool search(char data,int range){
	int i;
	for(i=0;i<=range;i++){
		if(data==key[i]) return true;
	}
	return false;
}



int main(){
	int i=0,j=0;
	char ch;
	// Taking input until a newline is encountered for both the strings
	printf("key = ");
	while(1){
		scanf("%c",&ch);
		if(ch=='\n'){
			key[i] = '\0';break;
		}
		key[i]=ch;i++;
	}
	// We assume that key contains all the 26 alphabets of the English language
	int len=i;
	i=0;
	printf("message = ");
	while(1){
		scanf("%c",&ch);
		if(ch=='\n'){
			message[i] = '\0';break;
		}
		message[i]=ch;i++;
	}
	i=0;
	// j traverses the whole string key and i is used for storing the distinct elements in order
	while(i<len && j<len){
		if(i>=26) break;// there are only 26 alphabets in the English language
		if(key[j]>'z'||key[j]<'a'){
			j++;
		}
		else if(search(key[j],i-1)) j++;
		else{
			key[i] = key[j];
			i++;j++;
		}
	}
	key[i]='\0';
	// implementing hashing 
	for(i=0;i<26;i++){
		HT[key[i]-'a'] = (char)('a'+i);
	}
	i=0;
	printf("Decoded message = ");
	// decoding and printing the result
	while(1){
		ch=message[i];
		if(ch=='\0'){
			printf("\n");break;
		}
		if(ch<='z'&&ch>='a') printf("%c",HT[ch-'a']);
		else printf("%c",ch);
		i++;
	}
	return 0;
}



