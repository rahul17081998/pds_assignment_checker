//Galipelli Sai Mallikarjun
//Roll no. 21CS30019
//system no. 90
//Assignment 7 Question 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
//assuming the size of key and message are less than 100
char Hashtable[26][2];


//creating hashtable
void createhashtable(char key[],int len){
     
     int i;
    
     for(i=0;i<26;i++){
         Hashtable[i][0] = i+97;
//stroring alphabtes in order at Hashtable[i][1]
         Hashtable[i][1] = '\0';
     }
     int j,k=0,flag;
     i=1;
     Hashtable[k][1] = key[0];

     k++;
//intialized the first element of key so that a loop to check whether the alphabet key[j] is appearing for the first time
     while(i<len){
          if(key[i] == ' '){
            i++;
            continue;
          }
          flag = 0;
          j=0;
          while(j<k){
               if(key[i] == Hashtable[j][1]){
                  i++;
                  flag = 1;
                  break;
               }
               j++;
          }
          if(flag==0){
              Hashtable[k][1] = key[i];
              i++;
              k++;
          }
     }
}


//Function to decode the message
char hashcode(char a){
     int j=0;
     while(j<26){
          if(Hashtable[j][1] == a){
             return Hashtable[j][0];
          }
          j++;
     }
}


int main(){
   char key[100];
   char message[100];
   int i=0;
   printf("key= ");
   fgets(key,999,stdin);
   int len1 = strlen(key);
   
   fflush(stdin);
   printf("message= ");
   fgets(message,999,stdin);
   int len2 = strlen(message);

   createhashtable(key,len1);
   char temp;

   printf("Decoded message: ");
   for(i=0;i<len2-1;i++){
     if(message[i] == ' ') printf(" ");
     else{
        temp = hashcode(message[i]);
        printf("%c",temp);
     }
   }
   printf("\n");

   return 0;
 }
