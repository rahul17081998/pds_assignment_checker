
//name:K.Hrushikesh Reddy
//roll no.:21CS30028
//ASSIGNMENT:A7_Q1
#include<stdio.h>
#include<string.h>

int main(){
char key[50];//array to store the key
char message[50];//array to store the message
printf("enter the message\n");
scanf("%[^\n]s", message);//scanf to scan stirngs containing spaces
printf("enter the key\n");
 scanf("%s",key);//note that it is not working if key has spaces
char Hash[26];//hash map from 26 coded alphabets to 26 ordered alphabets
int n=strlen(key);
int i;
for(i=0;i<26;i++) Hash[i]='I';//controller to check if hash has already been made or not
int ki=0;
int j;
for(j=0;j<n;j++){//hashing loop
int s=key[j];
if(Hash[s-97]=='I') {Hash[s-97]='a'+ki;ki++;}
}
int b=strlen(message);
printf("The decoded message is\n");
for(j=0;j<b;j++){
int a=message[j];
if(a==' ')printf(" ");
printf("%c",Hash[a-97]);//printing the decoded message
}
printf("\n");
return 0;
}
