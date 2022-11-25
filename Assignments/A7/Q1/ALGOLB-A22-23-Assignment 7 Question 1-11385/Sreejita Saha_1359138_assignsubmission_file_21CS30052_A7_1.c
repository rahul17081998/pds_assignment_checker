//Name-Sreejita Saha
//Roll-21CS30052
//Institute Email id- sreejita17saha@kgpian.iitkgp.ac.in

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char hash[26],alb[26],decode[100];
  int i,k,j,l,f,len;
  char *key=(char*)malloc(100*sizeof(char));
  char *message=(char*)malloc(100*sizeof(char));
  k=97;
  for(i=0;i<26;i++)
  {
    alb[i]=k;                       //forms the alphabet array
   
    k++;
  }
  for(i=0;i<26;i++)
  {
    hash[i]='\0';              //initialize te hash table with null
  }
  
  printf("Enter the key:");
  scanf("%[^\n]%*c",key);
  printf("\nEnter the message:");            //take the inputs for the key and message
  scanf("%[^\n]%*c",message);
  l=strlen(key);
  j=0;
  for(i=0;i<l;i++)
  {
     k=0;
     f=0;
     while(hash[k]!='\0')
     {
        if(hash[k++]==key[i])                //checks if there is any repetition of the letters
        {
           f=1;
        }
     }
     if(f==0 && key[i]!=' ')
     {
        hash[k]=key[i];                //store the first occurrence of each letter in the hash table
       
     }
     else
       continue;               //if repetition is there, it goes to next iteration
   }
   len=strlen(message);
   for(i=0;i<len;i++)
   {
     for(j=0;j<26;j++)
     {
       if(message[i]==hash[j])                    //finds the match in the hash table and then prints the decoded message
       {
           decode[i]=alb[j];
       
       }
       else if(message[i]==' ' )
       {
          decode[i]=message[i];
       }
     }
    }
    decode[len]='\0';
   printf("\nThe decoded message is - %s\n",decode);
     
  return 0;
}
