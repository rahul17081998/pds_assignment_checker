
//implemention of hashing in using linear probing
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 26
int hashTable[SIZE];//table initialized to 0
int hashCode(int key)
{
    return key % SIZE;
}

int main ()
{

    char key[100],message[100],hash[26];
    int i,j,k,l,s=0,p;
    char a='a';

    printf("Enter the key : ");
    scanf("%s",key);
    printf("Enter the message : ");
    scanf("%s",message);

    key[0]=hash[s++];

    for(i=1;key[i]!='\0';i++)
    {
        p=1;
        for(j=0;j<s;j++)
        {
            if(key[i]==hash[j])
            {
                p=0;
                break;
            }
        }
        if(p==1)
        hash[s++]=key[i];
    }

    printf("\nDecoded message is : ");
    for(i=0;message[i]!='\0';i++)
    {
        for(j=0;j<26;j++)
        {
            if(message[i]==hash[j])
            printf("%c",a+j);
        }
    }
    printf("\n");

    return 0;
}
	

