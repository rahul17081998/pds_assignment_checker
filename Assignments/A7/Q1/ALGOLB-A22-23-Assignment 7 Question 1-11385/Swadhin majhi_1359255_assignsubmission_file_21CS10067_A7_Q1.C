/*

  NAME-: SWADHIN SATYAPRAKASH MAJHI

  ROLL NO:-21CS10067

  TOPIC:-HASHING
  
  MACHINE NUMBER:-28

  ASSIGNMENT:-6

  QUESTION NUMBER:-1

  DESCRIPTION:-TO ENCODED MESSAGE FROM KEY


  COMPLEXTITY:-O(keylength+messagelength) TIME AND SPACE BOTH


*/
#include<stdio.h>

int main()
{


  char key[100];
  char message[100];
  char waste;

  //TAKING INPUT
  
  //gets(key);
  printf("\nENTER THE KEY");
  scanf("%[^\n]s",key);
  scanf("%c",&waste);
  printf("\nENTER THE MESSAGE");
  scanf("%[^\n]s",message);
  //printf("\n%s\n",key);

  int isPresent[26]={0};

  int code[26];

  //COMPUTE THE DECODE MESSAGE

  int k=0;
  int p=0;
  while(k!=26)
  {
    char t=key[p++];
    if(t==' ')continue;
    if(isPresent[t-'a']==0)
    {
       code[t-'a']=k;
       k++;
       isPresent[t-'a']=1;
    }

  }

  //DECODE

  for(int i=0;message[i]!='\0';i++)
  {
      if(message[i]==' ')continue;
      char t='a'+(code[message[i]-'a']);
      message[i]=t;

  }

  printf("\nTHE DECODE MESSAGE=%s \n",message);
  

  return 0;



}
