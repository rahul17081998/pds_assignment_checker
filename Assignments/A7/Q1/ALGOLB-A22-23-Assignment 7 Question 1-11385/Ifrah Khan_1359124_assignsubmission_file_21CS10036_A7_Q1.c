/* Name : Ifrah Khan
   Roll number : 21CS10036
   Department : Computer Science and Engineering
   Assignment : 7 */

#include <stdio.h>
#include <string.h>

int main()
{
int i,j,k=0,n=0,m=0;
char key[100],mssg[100],decoded[100],B[26];
printf("Enter the key\n");
for(i=0;i<100;i++)
{
scanf("%c",&key[i]);
if(key[i]!='\0')
n++;
}
printf("Enter the message\n");
for(i=0;i<100;i++)
{
scanf("%c",&mssg[i]);
if(mssg[i]!='\0')
m++;
}
char A[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(key[j]!=key[i] && key[i]!=' ')
{
B[k]=key[i];
k++;
}
if(key[j]==' ')
B[k]=' ';
k++;
}
}
printf("Decoded message : \n");
for(i=0;i<m;i++)
{
if(B[i]!=' ')
printf("%c",A[i]);
if(B[i]==' ')
printf(" ");
}
return 0;
}
