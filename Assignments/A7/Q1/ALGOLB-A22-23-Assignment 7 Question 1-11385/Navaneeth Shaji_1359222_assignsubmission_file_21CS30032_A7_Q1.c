/*
Name : Navaneeth Shaji
Roll_NO- 21CS30032
machine_number:16
*/

#include <stdio.h>
#include <stdlib.h>


// this function returns the has value of the letter
int hash(char x)
{
	return (x-'a');
}

int main()
{
	char hash_table[26];
	int i,j;
	for(i=0;i<26;i++){hash_table[i]='*';}
	
	char key[50]= "eljuxhpwnyrdgtqkviszcfmabo"; // shud contain all the letters of the alphabet
	char message[50]= "zwx hnfx lqantp mnoeius ycgk vcnjrdb" ; 
	i=0;
	while(message[i]==' ' || (message[i]<='z' && message[i]>='a'))i++; // finding the length of the message
	int len = i;
	

	
	for(j=0,i=0;j<26;i++)
	{
		// if the character is anything other than a letter , then we skip that character
		if(key[i]>'z' || key[i]<'a') continue;
		
		// hash function gives the index of the letter to be stored
		int hash_index=hash(key[i]);
		if(hash_table[hash_index]=='*')
		{
			hash_table[hash_index]=(char)(j+(int)'a'); // storing the encripted letter in the hash_table
			j++; // this variable ensures that we take only distinct letter into the hash_table 
		}
		
	}
	
	// printing the decrypted message
	for(i=0;i<len ; i++)
	{
		char letter=message[i];
		if(letter==' ')printf(" ");
		else{
		int hash_index=hash(letter);
		printf("%c",hash_table[hash_index]);
		}
	}
	printf("\n");
	
	return 0 ;	
	
	
	
	
	
	
	
	
	
	
}
