// NAME - CHINMAY BHUSARI
// ROLL NO. - 21CS30015
// MACHINE - 42
// DEPARTMENT - CSE

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int ht[26];

//Function to init the hash table
void init(){
	for (int i = 0; i < 26; ++i)
	{
		ht[i] = -1;
	}
}

//Function to assign hash code
int HashFunc(char s){
	
	int ascii = s;
	return ascii%97;
}

//Function to insert the value i.e i in hash table
void insert(char s,int i){

	int idx = HashFunc(s);
	ht[idx] = i; 
}

//Function to check whether the hash table is filled at that index or not
int search(char s){

	int idx = HashFunc(s);

	if(ht[idx] == -1)
		return 0;
	else
		return 1;
}

int main(){
	init();


	char key[100];
	char message[100];

//Taking Inputs
	printf("Enter key: ");
	fgets(key,100,stdin);


	printf("Enter message: ");
	fgets(message,100,stdin);

	int i=0;
	int m=0;
	
//In this while loop we are filling the hash table with with the substitution for the alphabet of the key
	while(key[i+1] != '\0'){
		if(key[i] == ' '){
			i++;
		}
		else{
			if(search(key[i]))
				i++;
			else{
				insert(key[i],m);
				i++;
				m++;
			}
		}
	}

	printf("Decoded message: ");

// Finally the message is decoded on the basis of the table made
	i=0;
	while(message[i+1] != '\0'){

		if(message[i] == ' '){
			printf(" ");
			i++;
		}
		else{
			int idx = HashFunc(message[i]);
			char s = ht[idx] + 97;
			printf("%c",s);
			i++;
		}
	}

	printf("\n");

	return 0;

}