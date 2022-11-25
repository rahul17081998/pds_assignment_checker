/* Name : Mihir Mallick
   Roll No : 21CS30031
   Sysytem : 48 */
  
#include<stdio.h>

int searchindex(char ht[], char c, int n){
	for(int i=0; i<n; i++) if(ht[i] == c) return i;
}

int search(char ht[], char c, int n){
	for(int i=0; i<n; i++) if(ht[i] == c) return 1;
	
return 0;

}

int slotAvailable(char ht[], int n){
	for(int i=0; i<n; i++){
		if(ht[i] == '.') return i;
	}
 return -1;
}

void insert(char ht[], char a, int n){
	if(slotAvailable(ht, n) == -1) printf("Hash table full !");
	else{
	 	if(!search(ht, a, n))	
	 	ht[slotAvailable(ht, n)] = a;
	}
}

void makeTable(char ht[], char key[], int n){
	for(int i=0; key[i]!='\0'; i++){
		if(key[i]>='a' && key[i]<='z') insert(ht, key[i], n);
	}

}

void printdecoded(char ht[], char msg[], int n){
	for(int i=0; msg[i]!='\0'; ++i){
		if(msg[i] == ' ') printf(" ");
		else printf("%c", 'a'+ searchindex(ht, msg[i], n));
	}

} 


int main(){
char key[100], message[1000];
char HT[26];
int n = 26;
printf("key = ");
fgets(key, 100, stdin);
printf("message = ");
fgets(message, 1000, stdin);
//initialize Hash Table with '.'
for(int i=0; i<26; i++) HT[i] = '.';
makeTable(HT, key, n);
printf("\nDecoded message : ");
printdecoded(HT, message, n);


return 0;
}
