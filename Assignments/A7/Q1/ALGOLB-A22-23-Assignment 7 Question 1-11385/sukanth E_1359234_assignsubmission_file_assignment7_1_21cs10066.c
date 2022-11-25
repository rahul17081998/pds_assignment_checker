/*name:sukanth
roll:21cs10066
sys:97
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  char m[10001];
  printf("Enter message:");
  scanf("%[^\n]%*c",m);//input for message
  char key[27];
  printf("Enter key:");
  scanf("%s",key);//input for key
  int d[26],j;
  for(j=0;j<strlen(key);j++){
     d[key[j]-'a']=j;        //computing hash table which is array d which maps the letter-'a' to the posistion of the letter in the key
  }//this is a pattern by which decoding occurs so it will be the hash function
  printf("decoded message:");
  for(j=0;j<strlen(m);j++){//printing the decoded message
     if(m[j]==' '){
       printf("%c",m[j]);
     }
     else{
       int index=d[m[j]-'a'];
       printf("%c",index+'a');//computing the corresponding element for a element in the message and printing it
     }
  }
  printf("\n");
  return 0;
}

