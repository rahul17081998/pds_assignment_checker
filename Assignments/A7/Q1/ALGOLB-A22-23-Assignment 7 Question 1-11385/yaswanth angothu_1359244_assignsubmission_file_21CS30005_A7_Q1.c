#include <stdio.h>  
#include <string.h> 
int main(){ 
	char key[26]; 
	char message[100];  
	int i,j,k;
	printf("key: "); 
	scanf("%s", key);
	printf("message: "); 	 
	scanf("%s", message); 
	char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'} ;
	printf("%c ",alpha[6]);
	int l;  
	l=strlen(message);  
	int arr[l]; 
	for(i=0;i<l;i++){ 
		for(j=0;j<26;j++){ 
			if(message[i]==key[j]){ 
				message[i]=alpha[j]; 
			} 
		} 
	}  
		printf("%s", message);  
	return 0; 
} 	
