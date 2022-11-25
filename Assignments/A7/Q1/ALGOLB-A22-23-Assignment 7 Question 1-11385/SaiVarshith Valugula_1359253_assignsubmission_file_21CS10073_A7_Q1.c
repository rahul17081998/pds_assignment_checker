/*
NAME: SAIVARSHITH V
DEPT: COMPUTER SCIENCE & ENGG
ROLL: 21CS10073
PACKAGE: CODE BLOCKS IDE
OS: UBUNTU
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int hastable[150];

#define SIZE 500

void decoder(char msg[])
{
    int i = 0;

    while (msg[i]!='\0'){ 
        if (msg[i]!=' '){
            printf("%c", hastable[msg[i]]);
        }
        else{
            printf(" ");
        } 
        i++;
    }
}

void table(char key[])
{
    int start=97, i=0;

    while (key[i]!='\0'){
        if (hastable[key[i]]==-1 && key[i]!= ' '){
            hastable[key[i]]=start;
            start++;
        }
        i++;
    }
}


int main()
{
    char msg[SIZE],key[SIZE];

    printf("Enter the key = ");
    fgets(key, SIZE, stdin);

    printf("Enter the message = ");
    fgets(msg, SIZE, stdin);

    for (int i=97; i<123; i++){
        hastable[i]=-1;
    }

    printf("The Decoded message is: ");    

    table(key);
    decoder(msg);

    printf("\n");

    return 0;

}