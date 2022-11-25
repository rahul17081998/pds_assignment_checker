/* 
Name: Anuguru Parthiv Reddy
Roll No:21CS10006
department: Computer science 
machine NO: 36
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char key[500];
	int marked[27]={0};//hashtable
	scanf("%[^\n]%*c",key);
	int n=strlen(key);
	int i,j=0;
	for(i=0;i<n;i++){
		//creating the hashtable
		if(key[i]==' '||marked[key[i]-'a'+1]!=0)continue;
		else {
		marked[key[i]-'a'+1]=j++;
		}
	}

	char message[1001];
	scanf("%[^\n]%*c",message);
	n=strlen(message);
	for(i=0;i<n;i++){
	if(message[i]==' ')continue;
	//swapping the characters after searching from hash table.(we search using hash value message[i]-'a'+1)
	else message[i]='a'+marked[message[i]-'a'+1];
	}
	printf("%s\n",message);
	return 0;
}
