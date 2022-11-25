/*Deepraj Das
21CS30017
A7 Q1*/

//porgram to decode the message using a key
#include<stdio.h>
#define N 1000
#define SIZE 26

//array to check if char has already been considered
int isp[SIZE];//initialize all isp to 0

//globally define key message and decode message
char alphabet[SIZE]="abcdefghijklmnopqrstuvwxyz";
char key[N],message[N],decode[N];
char decipher[SIZE];
char hashTable[SIZE];

//assuming all char are already lowercase
//eg key a-> hashes to 0, e hashes to 4
int find_index(char c){
	return c-'a';//return the diff between the ascii codes of the lowercase alphabet
}

//reduce the key string to only the first appearance of each element
//shortens the key to only have first appearances of alphabets without spaces and store it in decipher[]
void make_chartable(){
	int i,index=0;	
	for(i=0;key[i]!='\0';i++){
		if(key[i]==' '){//if char is 'space'
			continue;
		}
		else if(isp[find_index(key[i])]==1) continue;//if char is already considered
		else{
			decipher[index]=key[i];
			index++;
			isp[find_index(key[i])]=1;
		}
	}
}

//function to form the hashTable from the reduced key string or decipher string in this case
void make_hashTable(){
	int i,index;
	for(i=0;i<SIZE;i++){
		index=find_index(decipher[i]);
		hashTable[index]=i;
	}
}

//function to decode the message
void convert(){
	int i,ind1,ind2;
	char c;
	for(i=0;message[i]!='\0';i++){
		//if it is space character
		if(message[i]==' '){
			decode[i]=' ';		
		}
		else{
			ind1=find_index(message[i]);
			ind2=hashTable[ind1];
			decode[i]=alphabet[ind2];
		}
	}
}

int main(){
	int i,j;
	char temp;
//take input of key and message
	printf("Enter the key:");
	scanf("%[^\n]%*c",key);
	printf("Enter the message:");
	scanf("%[^\n]%*c", message);

	//reduce the key
	make_chartable();
	//form the hashTable from the reduced key string
	make_hashTable();
	//convert the message code to decoded message
	convert();
	//print the decoded message
	printf("\nThe decoded message is:\n%s\n",decode);

}
