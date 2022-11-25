/*Priyanshu kumar
21cs10053
cse dep.
machine no.-69*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define size 26
typedef struct{
	int key;
}htb;
typedef struct{
	int *a;
}ht;
int hashcode(char a){
	return (int)(a)-(int)('a');				//converts into hash code
}
void init(ht *c){
	c->a=(int *)malloc(sizeof(int)*26);			
	for (int i=0;i<size;i++)
		c->a[i]=-1;
}
void insert(char d[],ht *c){
	int k=0;
	for (int i=0;i<strlen(d)-1;i++){
		if (c->a[hashcode(d[i])]==-1 && d[i]!=' ')		
			c->a[hashcode(d[i])]=k++;			//checks its location in string
			}
}
void find(char d[],ht *c,char b[]){
	printf("Decoded message= ");
	for (int i=0;i<strlen(b)-1;i++){
		if (b[i]!=' '){
			if (a[hashcode(b[i])]==-1) {
				printf("Not enough data for decoding:");		//since some data is extra in message
				return;
			}
			printf("%c",(char)((int)('a')+c->a[hashcode(b[i])]));		//converts back into alphabet
		else printf(" ");
	}
}
int main(){
	char d[1000],b[1000];
	ht *c;
	c=(ht *)malloc(sizeof(ht));
	printf("key =");
	fgets(d,1000,stdin);
	printf("Message=");
	fgets(b,1000,stdin);
	init(c);
	insert(d,c);
	find(d,c,b);
	return 0;
}
	
	 
