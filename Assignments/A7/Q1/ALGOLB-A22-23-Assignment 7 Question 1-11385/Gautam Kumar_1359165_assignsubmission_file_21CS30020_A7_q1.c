#include <stdio.h>
#include <stdlib.h>

int main(){
	int alpha[26];				//created alpha array which will check whether the character are processed(1) or not processed(0)
	int i=0;
	for(i=0;i<26;i++){
		alpha[i] = 0;
	}
	printf("Enter the message code\n");
	char msg[100];
	scanf("%[^\n]%*c",msg);
	printf("Enter the key code\n");
	char key[100];
	scanf("%[^\n]%*c",key);
	int count;
	char add[26];					//add character array to store as substitution table 
	//for(i=0;i<26;i++){
		//add[i] = '-1';
	//}
	for(i=0;msg[i]!='\0';i++){
			if(msg[i]!=' '){
			
			if(alpha[msg[i] -'a'] == 0 ){
				add[msg[i]-'a'] = 'a' + count;		//here storing the element 
				count++;
				alpha[msg[i] - 'a'] = 1;
			}
			}
		
	}
	printf("Deconded message: ");
	for(i=0;key[i]!='\0';i++){
		if(key[i] == ' '){
			printf(" ");						//printing the element
		
		}else{
			printf("%c",add[key[i]-'a']);
		}
	}
return 0;
}
