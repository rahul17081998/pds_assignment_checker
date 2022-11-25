#include<stdio.h>
int main()
{
char key[100] ,message[100];
scanf("%s",key);
scanf("%s",message);
char hashtable[26];
int i;
for(i = 0 ;i < 26 ;i++)hashtable[i]=0;
int k = 0;
i = 0;
while(key[k] != '\0')
{
  char c = key[k];
  // check if alreay c is there or not ,if there move onto next one
  hashtable[i++] = c;
  k++;
}
int j = 0;
while(message[i] != '\0')
{
 if(message[i]==' ')printf(" ");
 else{
 char c = message[i];
 int a = c - 97;
 printf("%c",hashtable[a]);
 
 }
i++;
}

}
