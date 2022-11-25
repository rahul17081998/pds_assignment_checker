#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 50
#define alpha 26

//function to find string length without spaces
int stringlength(char b[]){
int i,k,p=0;
k=strlen(b);
for(i=0;i<k;i++)
if(b[i]==' '){
p++;
}
return (k-p);
}

//function to get the output
void string(char a[],char b[],char c[],char d[],int l,int n){
int i,k,j=0,q,p,m,r,s=0,e[alpha];
//string length of b
k=strlen(b);
for(i=0;i<k;i++){
if(b[i]!=' '){
//a seprate array is created to store the character without space
c[j]=b[i];
j++;
}
}
//an array is defined
for(i=0;i<alpha;i++){
e[i]=0;
}

for(i=0;i<l;i++){
q=c[i];
p=q%97;
//condition statement to avoid reapeations
if(e[p]==0){
//here s is include to subtract the number of repeations from i
a[p]='a'+i-s;
e[p]=1;
}
//increament of s value for each repeation
else {
s++;
}
}
//printing the output
for(i=0;i<n;i++){
if(d[i]==' '){
printf(" ");
}
else {
r=d[i];
printf("%c",a[r%97]);
}
}
}

int main(){

char a[alpha],b[size],c[alpha],d[size];
int i,j,q,l,n,z;
char buffer;
printf("key =");
scanf("%[^\n]",b);
scanf("%c",&buffer);
printf("message =");
scanf("%[^\n]",d);

l=stringlength(b);
n=strlen(d);


printf("Decoded message =");
string(a,b,c,d,l,n);

printf("\n");
return 0;
}
