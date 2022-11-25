#include<stdio.h>
#include<string.h>

int hashCode(char ch)
{return (ch-97);
}

void fill(char HT[26][2],char key[],int size)
{
int check[26];
for(int i=0;i<26;i++)
{
check[i]=0;
}
int ch=0;
for(int i=0;i<size;i++)
{
  if(key[i]!=' ')
  {
     int h=hashCode(key[i]);
     if(check[h]==0)
     {
      HT[h][0]=key[i];
      HT[h][1]='a'+ch;
      check[h]=1;
      ch++;
     }
  }
}
return;
}



int main()
{
char key[500];
printf("Enter the key\n");
int i=0;
do
{
scanf("%c",&key[i]);

//if(!(key[i]>='a'||key[i]<='z'||key[i]==' '))break;
//if(key[i-1]=='\n')break;
i++;
}while(key[i-1]!='\n');
//printf("%s",key);
char ht[26][2];
fill(ht,key,i);
//printf("size of the string is%d\n",i);
/*for(int k=0;k<i;k++)
{
if(key[k]!=' ')
{int h=hashCode(key[k]);
printf("%c,%c\n",key[k],ht[h][1]);}
}*/




printf("Enter the encoded message\n");
char message[500];
int j=0;
do
{
scanf("%c",&message[j]);
j++;
}while(message[j-1]!='\n');



for(int k=0;k<(j-1);k++)
{
 if(message[k]!=' ')
  {int h=hashCode(message[k]);
  printf("%c",ht[h][1]);} 
 else
  printf(" "); 
}
printf("\n\n");

return 0;
}

















