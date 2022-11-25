#include <stdio.h>
#include <string.h>
#define N 26
#define M 100
char hash[M]; //Hash Table implemented using an array
//Initializing the hash array elements with '\0'
void initialize_string(char str[])
{
      int i;
      for(i=0;i<M;i++)
      {
           str[i] = '\0';
           }
    }
 //Function to find the position of the character in the string key
 //For example position of character 'l' in the string key is 2. The function will return the value 1.Since the array index starts from 0         
int indexl(char c,char str[])
{
     int i = 0;
       while(str[i] != c)
       {
           i++;
          } 
      return i;
      }   
//hashcode is the hash function for the HashTable               
char hashcode(char c,char str[])
{
    int i=0;
       if(c == ' ')  
       {
           return (' ');   //if blank character is given by the input then it will return the same character.i.e hashcode for blank character is the same blank character 
           }
       i = indexl(c,str);
       return ('a'+i);
       }
//This function is to get the decoded message from the given message       
  void Decode(char str[],char key[])
  {
       int i;
       for(i=0;i<M;i++)
       {
            if(str[i] != '\0')
            {
           char c = hashcode(str[i],key);
           hash[i] = c;
           }
           else
           {
              break;
              }
         }
    }   
  void display(char str1[],char str2[])
  {
       printf("Key = %s",str1);
       printf("\n");
       printf("Message = %s",str2);
       printf("\n");
       printf("Decoded message = %s",hash);
       }
                     
int main()
{
   int i;
   char key[N];
   char message[M];
   printf("Enter the key :\n");
   fgets(key,999,stdin);
   printf("Enter the message :\n");
   fgets(message,999,stdin); 
    initialize_string(hash);
    Decode(message,key);
    display(key,message);
    }
    
    
        
        
   
   
