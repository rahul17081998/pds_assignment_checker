/*
NAME- JAYSHRI BEJ
ROLL NO -21CS10034
DEPARTMENT- CIOMPUTER SCIENCE AND ENGINEERING
ASSIGNMENT -7
QUESTION -1
*/
#include<stdio.h>
void message(char dec_msg[],char msg[])
{
int k;
for(k=0;k!='\0';k++)
{
msg[k]=dec_msg[k];
}
printf("%s",msg);
}
void decrypt(char key[],char msg[])
{
int i,alph=97,dec_msg[1000];
for(i=0;i<26;i++)
{
key[i]=alph;
alph++;
dec_msg[i]=key[i];
}
message(dec_msg,msg);
}
int main()
{
char key[1000];
char msg[1000];
printf("key=");
int i,j;
scanf("%s",key);
printf("message=");
scanf("%s",msg);
decrypt(key,msg);
}


