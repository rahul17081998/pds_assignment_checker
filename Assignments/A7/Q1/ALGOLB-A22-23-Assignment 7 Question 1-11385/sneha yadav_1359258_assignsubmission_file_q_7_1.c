//Name-Sneha Yadav
//Roll No.-21CS10069
//Department-CSE
//Computer No.-70

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define size 26
# define max 26

int Table[size];

void decodeMessage(char key[],char message[]){
   char temp[];
    for(int i=0;i<size;i++){
         Table+=char(int(key[i]-(97+i))%26+(97+i);
    }
    for(int i=0;i<size;i++){
        int temp[i]=message[i];
        message[i]=result[i];
        result[i]=temp[i];
    }
    return temp;
}
int main(){
  char key[];
  char message[];
  printf("Enter the key");
  scanf("%s",&key);
  printf("\ndecodemessage",decodemessage(key,message));
  return 0;
}
