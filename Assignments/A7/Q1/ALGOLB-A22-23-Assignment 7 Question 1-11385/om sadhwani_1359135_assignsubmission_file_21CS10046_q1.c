#include <stdio.h>



int main(){
	
	
	char key[200];//storing the key
	int j=0;
	
	char d;
	scanf("%c",&d);
	key[j]=d;
	while(d!='\n'){ // while loop is used to take input as characters
		key[j]=d;
		j++;
		scanf("%c",&d);
		}
		key[j]='\0';
	
	char mess[200];// storing the message
	
	scanf("%c",&d);
	j=0;
	mess[j]=d;
	while(d!='\n'){// while loop is used to take input as characters
		mess[j]=d;
		j++;
		scanf("%c",&d);
		}
		mess[j]='\0';
	
	
	char a[26];// array to store which element is mapped to which, here a[0] is mapped to a a[1] is mapped to b and so on
	int i;
	for(i=0;i<26;i++){
		a[i]='0';// initializing
		}
	
	
	i=0;
	j=0;
	while(key[i]!='\0'){
		if(key[i]==' ') {// if there is a space in the key then continue;
			i++;
			continue;
			}
		int temp=key[i]-'a';//getting the ascii value of the char
		if(a[temp]!='0'){// if the char is already mapped then skip
			i++;
			continue;
			}
		char c= (char)('a'+j);
		a[temp]=c;//adding it to the array
		j++;
		i++;
		}
		
	
	
	
	char deco[300];//creating the final decoded string
	i=0;
	j=0;
	while(mess[i]!='\0'){
		if(mess[i]==' '){
			deco[j]=' ';
			j++;
			i++;
			continue;
			}
		int temp=mess[i]-'a';
		deco[j]=a[temp];
		j++;
		i++;
		}
	
	deco[j]='\0';
	printf("%s \n",deco);
	
	
	
	
	
	return 0;
	}
