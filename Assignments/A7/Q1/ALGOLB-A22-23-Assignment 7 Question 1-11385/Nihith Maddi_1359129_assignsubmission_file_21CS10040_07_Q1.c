/* NAME:MADDI NIHITH
   ROLL NO:21CS10040
   DEPARTMENT:COMPUTER SCIENCE AND ENGINEERING
   SYSTEM NO:53
*/
#include<stdio.h>
#include<stdlib.h>
void dec(char *k,char* d){            //this is a function used to find substitution array
 int i,c[26],j,l=0;
 for(i=0;i<26;i++)
  c[i]=0;
 for(i=0;k[i]!='\0';i++){            
   if(k[i]!=' '){ 
     j=k[i];j=j-97;                 //finding whether given character is repeated or not
   if(c[j]==0){                      //if c[j]==0 then it occured first time and included in array d
    d[l]=k[i];
    l++;
    c[j]=1;
 }}}
 d[l]='\0';
 return ;
} 
    

int main(){
 char k[100],m[100],m1[100],d[26];
 int i=0,j=0;
 do{
  scanf("%c",&k[i]);
  i++;
}while(k[i-1]!='\n');
k[i-1]='\0';

do{
  scanf("%c",&m[j]);
  j++;
}while(m[j-1]!='\n');
m[j-1]!='\0';
 dec(k,d);                           //array d contains the substitution array
for(i=0;m[i]!='\0';i++){
 if(m[i]!=' '){
  while(d[j]!=m[i]){
    j++;
    }
 m1[i]=(char)j+97;
 j=0;
}
else 
   m1[i]=m[i];
}
m1[i]='\0';
printf("decoded message is %s",m1);
 }
