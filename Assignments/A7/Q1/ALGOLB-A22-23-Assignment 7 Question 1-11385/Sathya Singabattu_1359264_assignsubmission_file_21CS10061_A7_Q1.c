/****************
SINGABATTU SATHYA
21CS10061
SYSTEM NUMBER  25
ASSIGNMENT - 7
****************/

#include <stdio.h>

int main()
{
    char key[100]; 
    char message[100];
    printf("Key: ");
    scanf("%[^\n]",key); //takes string input till we press "ENTER"(including spaces) (till it finds '\n')
    char temp; //newline character is stored in next character input. So we create a temporary character and \n is stored in it
    scanf("%c",&temp);
    printf("Message: ");
    scanf("%[^\n]",message);//taking input string from user
    char hashtable[26];
    int i,lk,lm,lht,j=0,test; //lk=lenght of key , lm=length of message , lht=length of hash table
    for (i=0;key[i]!='\0';i++); //finding length of string
    lk=i;
    for (i=0;message[i]!='\0';i++);
    lm=i;
    for (i=0;i<lk;i++)
    {
        if (key[i]==' ') continue;
        test=0;
        if (j==26) break; //if hashtable is full then break
        hashtable[j]=key[i]; //store the key in hashtable without spaces
        for (int x=0;x<j;x++)
        {
            if (hashtable[j]==hashtable[x])
            {
                test=1; //if the character is already stored in hashtable then no need to store again
                break;
            }
        }
        if (test==1) continue; 
        else j++; //if the character is not already stored in hashtable then fill for the next index of hashtable
    }
    lht=j; //length of hashtable
    printf("Decoded message is:\n");
    //in the hashtable , index 0 corresponds to 'a'(ascii value is 97), index 1 corresponds to 'b'(ascii value is 98) and so on
    //so if a character is at index j, then it corresponds to character that has ascii value of 97+j
    //so print the corresponding character
    for (i=0;i<lm;i++)
    {
        for (j=0;j<lht;j++)
        {
            if (message[i]==hashtable[j]) break;
        }
        if (j!=lht) printf("%c",j+97);
        else printf(" ");//if message[i] is space then value of j will become lht after the for loop so print a space
    }
    printf("\n");
    return 0;
}
  
