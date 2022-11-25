/* Yasaswani Rongali
   21CS10082
   Computer Science and Engineering
   Machine No.: 74 */





#include <stdio.h>
#include <string.h>
#include <stdlib.h>

 

int main(){
int m;
printf("enter the size of message: ");

scanf("%d",&m);

char key[26];
char message[m];
char hashtable[26][2];
printf("enetr key: ");
scanf("%s",key);
printf("enter message: ");
fgets(message,m,stdin);
int i;


for(i=0;i<26;i++){
 hashtable[i][0]=key[i];
 hashtable[i][1]="a"+i;   // 
}

int j,k;
for(j=0;j<m;j++){
 for(k=0;k<26;k++){
  if(message[j]==hashtable[k][0]){
     message[j]=hashtable[k][1];
     break;
    }
  }
}

printf("decoded message: %s",message);


}




















