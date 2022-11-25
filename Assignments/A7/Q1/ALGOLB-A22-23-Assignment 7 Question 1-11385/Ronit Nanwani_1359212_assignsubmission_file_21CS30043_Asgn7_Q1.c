#include <stdio.h>

int hashtable[26];											//hashtable to store the key value pairs...


int main(){
        char key[100];int l1=0;								//char array key to take key input...l1 to store length of key
        char message[100];int l2=0;							//char array message to take message imput..l2 to store its length...
	char x;
	
	printf("Enter the key\n");							//taking the input key...
	scanf("%c",&x);
	while(x!='\n'){
		key[l1]=x;
		l1++;
		scanf("%c",&x);
	}
	key[l1]='\0';									//to denote that the array ends here..
	
	printf("Enter the message\n");							//taking the input message..
	scanf("%c",&x);
	while(x!='\n'){
		message[l2]=x;
		l2++;
		scanf("%c",&x);
	}
	message[l2]='\0';								//to denote that the array ends here..
	
	int it=0;int curr=97;int y;							
						//the idea of hashtable is to map indices [0-25] (representing a-z) to the corresponding ASCII values of the first 							occuring letters in the input key...
						//so if the input key is "the",then hashtable[19]=97, hashtable[7]=98, hashtable[4]=99...
						//19 is the difference of ASCII value of 't' and 'a' and 97 is the ASCII value of 'a'...
						//7 is the difference of ASCII value of 'h' and 'a' and 98 is the ASCII value of 'b'...
						//4 is the difference of ASCII value of 'e' and 'a' and 99 is the ASCII value of 'c'...
						
						//it is the current index we are on in the kar array...
 	while(it!=l1){				//curr stores the ASCII value of the character to which the character in key will be mapped...in above explanation 							97,98,99 are the values of curr in respective iterations..
		if(key[it]==' '){		//If blank space then dont assign any character to it...move on to next iteration..
			it++;
			continue;	
		}
		y=key[it]-97;			
		if(hashtable[y]==0){
			hashtable[y]=curr;
			curr++;
		}
		it++;
	}
	
	it=0;
	printf("Decoded message:\n");
	while(it!=l2){					//Simply decoding the message by using the hashtable...
		if(message[it]==' '){		
			printf(" ");			//If blank space then print it as it is and move on to next iteration...
			it++;
			continue;	
		}
		
		y=message[it]-97;
		x=hashtable[y];
		printf("%c",x);
		it++;
	}

	printf("\n");
	return 0;

}
