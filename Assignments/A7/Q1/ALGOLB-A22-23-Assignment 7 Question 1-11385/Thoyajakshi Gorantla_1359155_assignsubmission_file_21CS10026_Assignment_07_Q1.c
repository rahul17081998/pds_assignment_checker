/* Name: Thoyajakshi Gorantla 
Roll no: 21CS10026
Dept: Department of computer science and engineering
Machine no:46*/

#include<stdio.h>

int main(){
int n;
printf("Enter the size of key string:\n");
scanf("%d",&n);
char key[n];
printf("Enter the key:\n");
scanf("%s", key);

int m;
printf("Enter the size of message string:\n");
scanf("%d",&m);
char message[m];
printf("Enter the message:\n");
scanf("%s", message);

int i;
char Alpha[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char T[n];
for(i=0;i<n;i++){
T[key[i]-'a'] = Alpha[i];
}

printf("Decoded message:\n");
char OP[m];
for(i=0;i<m;i++){
OP[i]=T[message[i]-'a'];
}
printf("%s\n",OP);
return 0;
}
