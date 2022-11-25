/***Name: Ratan Junior
Roll no.: 21CS30041
Computer number: 51
******/

#include <stdio.h>
#include <stdlib.h>
#define M 26
int Htable[M];

//to keep count of no. of alphabets taken
int count = 0;

int hashcode(char c){
	//hashing each char in alphabets to range of 0-25 
	//sort of linear probe
	if(Htable[c - 'a'] == -1){
		count++;
		return count - 1;
	}
	else{
		return Htable[c - 'a'];
	}
}
int main(){
	int l = 0, i;
	char a;

	for (i = 0; i < M; i++){
		//initialising the hash table
		Htable[i] = -1;
	}

	printf("\nkey = ");
	char* k = (char*)malloc(sizeof(char));
	a = getchar();
	while(((a <= 'z') && (a >= 'a')) || (a == ' ')){
		if(a == ' '){
		a = getchar();
		continue;
		}

		k = realloc(k, l + 1);
		k[l++] = a;
		Htable[a - 'a'] = hashcode(a);
		a = getchar();
	}
	k = realloc(k, l + 1);
	k[l] = '\0';
	
	//printing the hash table
	for (i = 0; i < M; i++){
		printf("\n%c -> %c", 'a' + i, 'a' + Htable[i]);
	}
	
	
	//printf("\n%s", k);

	l = 0;
	printf("\nmessage = ");
	char* dm = (char*)malloc(sizeof(char));
	a = getchar();
	while(((a <= 'z') && (a >= 'a')) || (a == ' ')){
		dm = realloc(dm, l + 1);
		if (a != ' ')
			dm[l] = 'a' + hashcode(a);//retrieving from the hashtable
		else
			dm[l] = ' ';
		l++;
		a = getchar();
	
	}
	dm = realloc(dm, l + 1);
	dm[l] = '\0';
	
	printf("\nDecoded message = ");
	printf("\n%s\n", dm);
}
