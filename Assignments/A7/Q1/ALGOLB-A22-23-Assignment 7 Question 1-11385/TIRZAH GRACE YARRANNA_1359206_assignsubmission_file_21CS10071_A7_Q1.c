/*Name: Tirzah Grace
Rollno: 21CS10071
DEPT: CSE
SYSTEM NUMBER: 71 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
#define size 26 

int hashtable[size],present[size] ;          //creating a hash table of size 26  , present array is to store the index of the key if present , else stores -1

int main()
{

 char key[max],message[max];             

 printf("key: ");
 fgets(key,max,stdin);                   //Input key

 printf("message: ");
 fgets(message,max,stdin);               //Input Message

 int i = 0,j=0;

 for(i=0;i<26;i++)present[i]=-1;        // Storing -1 as default index in present array

 for( i = 0 ; i<strlen(key) ; i++  )
   {
       if(key[i]!=' ')                  
          {
        if(present[key[i]-'a']==-1)           // If key is not present already stores the key in hash table and stores its index in present table
             {
               present[key[i]-'a']=j;
               hashtable[j]=key[i]; j++;
             }
          }
   }

     printf("Decoded message: \"");             //final output printing

 for(i=0;i<strlen(message)-1;i++)
 {
            if(message[i]==' ') printf(" ");
            else printf("%c",'a'+present[message[i]-'a']);
 } 
     printf("\"\n");
     return 0;
}
