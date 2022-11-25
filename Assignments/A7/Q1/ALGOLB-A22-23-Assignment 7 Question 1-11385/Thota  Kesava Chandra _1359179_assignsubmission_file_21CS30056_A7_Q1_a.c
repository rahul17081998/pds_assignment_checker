/*
Thota Kesava Chandra
21CS30056
27/10/2022
System 28
*/


#include <stdio.h>
#include <stdlib.h>

//initialises the hash table
void initialise(char hash[])
{
    int i;
    for(i=0;i<26;i++)
    {
        hash[i]='\0';
    }
}

//generates the hash table for the input
void hash_generator(char key[],char hash[])
{
    int count=0,index,i;
    for(i=0;key[i]!='\0';i++)
    {
        if(key[i]>='a' && key[i]<='z')
        {
            index = key[i]-97;
            if(hash[index]=='\0')
            {
                hash[index] = 'a' + count;
                if(count==26) return;
                count++;
            }
        }
    }
}

//decodes the message and stores it in dex_msg
void decoder(char msg[],char hash[],char dec_msg[])
{
    int i,index;
    for(i=0;msg[i]!='\0';i++)
    {
        if(msg[i]>='a' && msg[i]<='z')
        {
            index = msg[i]-97;
            dec_msg[i] = hash[index];
        }
        else
        {
            dec_msg[i] = msg[i];
        }
    }
    dec_msg[i] = '\0';
}

int main()
{
    char key[100],msg[100],hash[26],dec_msg[100];
    
    printf("Enter the key : ");
    scanf("%[^\n]",key);
    initialise(hash);
    hash_generator(key,hash);

    getchar();
    printf("Enter the message : ");
    scanf("%[^\n]",msg);
    decoder(msg,hash,dec_msg);

    printf("\nDecoded message : '%s' \n\n",dec_msg);
    return 0;
}
