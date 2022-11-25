#include <stdio.h>
#include<string.h>
#define max 26
char* hashtable[max];//hash table to store character of the key
int size=0;
void int_array()
{
    int i;
    for(i=0;i<max;i++)
    {
        hashtable[i]=NULL;//initializing all slots to NULL
    }
}
void insert(char* c)
{
    int i=0;
    while(hashtable[i]!=NULL)
    {
        if(hashtable[i]==c)//the character is already there in the table no need to insert
          return;
        i++;//the index contains some other character so we move to next index
    }
    if(hashtable[i]==NULL)
    {
        hashtable[i]=c;//stores the character in the first empty slot
        size++;//increasing the size after inserting the element
    }
}
int search(char*c)
{ int i;
  for(i=0;i<26;i++)
  {
      if(hashtable[i]==c)
         return i;// returns the index of the character 
  }
    
}
int main()
{   int i,a;
   char *str="the quick brown fox jumps over the lazy dog";
   char *mess="vkbs bs t suepuv";
   int_array();
   for(i=0;str[i]!='\0';i++)
   {
       if(str[i]!=' ')
         insert(str[i]);
   }
   //decoding message now
   for(i=0;mess[i]!='\0';i++)
   {  
       if(mess[i]!=' ')
       {
         a=search(mess[i]);
         printf("%c",97 +a);
       }
       else
       {
         printf(" ");  
       }
   }
   printf("\n");
}

