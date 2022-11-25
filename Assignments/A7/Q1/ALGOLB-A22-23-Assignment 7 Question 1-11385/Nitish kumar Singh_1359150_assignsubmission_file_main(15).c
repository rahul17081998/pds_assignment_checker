/*
name:nitish kumar singh;
roll no:21CS10044;

*******************************************************************************/
#include <stdio.h>

#define SIZE 100
char hashTable[26];

//insert in hash table
void insert(char key,char value)
{
    int hashIndex = key - 'a';
    hashTable[hashIndex]=value;
}
//initializing the hash table to 0
void prepareTable(char *key){
    int i;
    for(i=0;i<26;i++)
        hashTable[i]=0;
    //prepare the table
    char ch='a';
    for(int i=0;key[i]!='\0';i++)
    {
        //if the letter is not present in the hash table
        if(key[i]!=' ' && hashTable[key[i]-'a']==0)
        {
            //first time
            insert(key[i],ch++);
        }
    }

    //print the hash table
    // for(int i=0;i<26;i++)
    // {
    //     if(hashTable[i]!=0)
    //     {
    //         printf("%c->%c\n",i+'a',hashTable[i]);
    //     }
    // }
}

//decode using table
int decode(char *key, char *message, char *decoded_message)
{
    //loop
    int i;
    for(i=0;message[i]!='\0';i++)
    {
        //if the letter is present in the hash table
        //if space then add space
        if(message[i]==' ')
        {
            decoded_message[i]=' ';
        }
        else if(hashTable[message[i]-'a']!=0)
        {
            decoded_message[i]=hashTable[message[i]-'a'];
        }
        else
        {
            //if the letter is not present in the hash table
            return 0;
        }
    }
}

int main()
{
  
    //input key and messagezwx hnfx lqantp mnoeius ycgk vcnjrdb
    char key[SIZE],message[SIZE];
    printf("Enter the key:");
    gets(key);
    prepareTable(key);
    printf("Enter the message:");
    gets(message);

    //decoded message
    char decoded[SIZE];

    decode(key,message,decoded);
    printf("The decoded message :%s",decoded);
    return 0;
}
