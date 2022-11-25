#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 28

  char hashtable[28];
  //first appearence of the 26 letters is aligned with regular english alphabets(stored in hash table),then message is decoded
  
  
  //hashcode takes key as input 
  char hashcode(char key,int curr)
  {
    int find;//find helps us to find the relative positioning of the key
    char *temp="abcdefghijklmnopqrstuvwxyz"; 
    for(int i=0;i<26;i++)
    {
      if(temp[i]==key)
     {
        find=i;
     }
    }
    hashtable[find]=temp[curr];
   
   return hashcode;
  
  }
 
  



  int main()

  {
  char st1[28],st2[40],st3[40];//2 extra spaces for holding a "space" and a string terminated null 
   int sum=0;
  st1="eljuxhpwnyrdgtqkviszcfmabo";//appearence of letters is aligned with 1st 26 letters using this string
 
  st2="zwx hnfx lqantp mnoeius ycgk vcnjrdb";//secret message
   
  for(int i=0;st2[i]!='\0';i++)//for finding length of st2
    {
     sum++;
    }
 
  //we now fill up our hashtable using this
  for(int i=0;st[i]!='\0';i++)
  {
    hashtable[i]=hashcode(st[i],i);

  }
  
  for(int i=0;i<=sum;i++)
  {   
      
      int hashindex;
      hashindex=st2[i]-'a';//hashindex for finding the index to pick out the value from hashtable

      if(st2[i]=='')
      st3[i]=st2[i];//if there is a space we keep it as it is

      st3[i]=hashtable[hashindex];//st3 is used for storing and printing secret message 
     
  }
  
 
 printf("the secret message is:%s",st3);





}
