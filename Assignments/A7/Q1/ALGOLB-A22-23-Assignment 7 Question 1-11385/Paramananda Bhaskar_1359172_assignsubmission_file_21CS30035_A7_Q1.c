/*
Name: Paramananda Bhaskar;
Roll no.: 21CS30035;
Assignment: 7;
Question no.: 1;
Machine No.: 76;
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 27
#define MAX 100

struct data 
{
   char key;
   char message;
};

struct data* hashArray[SIZE]; 
struct data* dummyItem;
struct data* item;
char alreadyConsidered[SIZE]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char alphabet[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int j=-1;
char* output;

int checkIfAlreadyConsidered(char c, char alreadyConsidered[])
{
  for(int i=0; i< SIZE; i++)
 {
   if(c== alreadyConsidered[i])
  {
    return i;
  }
 }
 return -1;
}

/*void init_hashArray(char str[], struct data* hashArray[])
{
  for(int i=0; i< strlen(str); i++)
 {
   hashArray->key = str[i];
   hashArray->
 }
}

bool checkIfAlreadyConsidered(char c, char alreadyConsidered[])
{
  for(int i=0; i< SIZE; i++)
 {
   if(c== alreadyConsidered[i])
  {
    return true;
  }
 }
 return false;
}
void hashCode(char str[]) 
{
   int j=1;
   //char alphabet[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   for(int i=0; i< strlen(str); i++)
  {
    alreadyConsidered[0]=str[0];
    hashArray[0]->key = str[0];
    hashArray[0]->message = alphabet[0];

    if(!(checkIfAlreadyConsidered(str[i], alreadyConsidered)))
   {
     hashArray[j]->key = str[i];
     hashArray[j]->message = alphabet[j];
     j++;
   }
  }
j--;
}
*/
int hashCode(char c) 
{
   if((checkIfAlreadyConsidered(c, alreadyConsidered)) ==-1)
   {
     j++;
     hashArray[j]->key = c;
     hashArray[j]->message = alphabet[j];
     alreadyConsidered[j]= c;
     return j;
   }
 return checkIfAlreadyConsidered(c, alreadyConsidered);
}

void hashString(char str[])
{
int i=0;
while(str[i] != '\0')
 {
   int index= hashCode(str[i]);
   /*hashArray[index]->key = str[i];
   hashArray[index]->message = alphabet[j];*/
   i++;
 }
}

struct data *search(char key) {
   //get the hash 
   int hashIndex = hashCode(key);
	
      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex]; 
	
   return NULL;        
}


char* decode(char input[])
{
 //char output[strlen(input)];
 for(int i=0; i< strlen(input);i++)
 {   
     if(input[i]== ' ')
     {
        output[i]=' ';
     }
     else 
       output[i]= search(input[i])->message;
 }
return output;
}

int main()
{
char key[MAX];

printf("Enter key:\n");
scanf("%s", key);
printf("%s", key);
hashString(key);

char message[MAX];
printf("Enter message:\n");
scanf("%s", message);

char* output= decode(message);

printf("decoded message: %s\n", output);
return 0;
}
