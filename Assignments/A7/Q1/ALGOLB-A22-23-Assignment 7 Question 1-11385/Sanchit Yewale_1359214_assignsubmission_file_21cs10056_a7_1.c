/*
name sanchit yewale 
roll 21cs10056
assignment 7
question 1
*/

#include <stdio.h>
#include <stdlib.h>

int asci(char c){					//function to interchange charachter to its corresponding ascii integer
return (int)c;
}

char asci2(int c){
return (char)c;				//function to change the integer to corresponding character
}


void create(char key[],char message[]){			//functionn to get the solution
int hash1[150],x=97,i,a=97;
for (i=0;i<97;i++){
	hash1[i]=0;							//hash1 array is for 26 calphabets 
}
for (i=97;i<123;i++){
	hash1[i]=1;
}
int  hash2[150][1];				//in hash2 array we form the table that is the given table
	for (i=0;i<123;i++){
	hash2[i][0]=0;
}

for (i=0;key[i]!='\0';i++){			//forming tyhe table by assigning the key characters their corresponding alphabets
	if (key[i]!=' '){
		if (hash1[asci(key[i])]!=0){
		hash2[asci(key[i])][0]=a;
		a++;
		hash1[asci(key[i])]=0;			//making the hash 1 values 0 so that they are used only once
}}}

for (i=0;message[i]!='\0';i++){
	if (message[i]!=' '){
	message[i]=asci2(hash2[asci(message[i])][0]);		//decrypting the message by use of hash2 table 
}}
printf ("\nthe decoded message is :%s",message);
}


int main (){

char key[50],message[100];
printf ("enter the key ");		//taking key as input
scanf ("%s",key);
getchar();
printf ("enter the message ");		//taking message as input
fgets(message,999,stdin);
create (key,message);
return 0;
}

