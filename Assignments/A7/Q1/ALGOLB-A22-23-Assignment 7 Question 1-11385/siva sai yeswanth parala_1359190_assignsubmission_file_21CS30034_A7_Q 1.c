//name:p.siva sai yeswanth
//roll no.:21CS30034
//DEPT:CSE
//SYSTEM NUMBER:17
#include<stdio.h>
#include<string.h>

char key[50],message[50];
char hashtable[2][26];

char check(int k){
	int i,t;
	t=0;
	if(key[k]==' '){
		k++;
		check(k);
	}
	for(i=0;i<k;i++){
		if(key[k]==hashtable[1][i]){
		t=1;					//chcecking for elements in key which are repeated
	}
       }
	if(t==1){
		k=k+1;
		check(k);
	}
	if(t==0){
		return key[k];
	}
}
int main(){

	printf("Enter key:\n");
fgets(key,50,stdin);
	printf("Enter message:\n");
fgets(message,50,stdin);
char hashtable[2][26];					//reading key and message
int i,j;
	for(i=0;i<26;i++){
		hashtable[2][i]='a'+i;
	}
	hashtable[0][0]=key[0];				//creating 2nd row of hashh table
int k=1;
int m;
	for(i=1;i<26;i++){
		char nonrepeated=check(k);
         	hashtable[1][i]=nonrepeated;			//creating first row of hash table
	}

int h;
h=strlen(message);
char decoded[h];
for(i=0;i<h;i++){						//to store the decoded message
	if(message[i]==' '){
		decoded[i]==' ';
		continue;
	}
	else{
	 for(j=0;j<26;j++){
		if(message[h]==hashtable[1][j]){			//decoding
			m=j;
		}
	 }
        decoded[i]=hashtable[2][m];
        }
}
printf("%s",decoded);								//printing decoded message
return 0;
}


	
	

	

