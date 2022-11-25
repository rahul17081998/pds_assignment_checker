#include<stdio.h>
#include<string.h>

int main()
{
    int i=0;
    char key[100];   //will be used to take in key from user
    int alpha[26];   //used to create newkey
    char temp;
    char hash[26];   //hash table to be used

    //initialising values according to our convenience
    for(i=0;i<26;i++)
    {
        hash[i]=' ';
        alpha[i]=0;
    }

    //taking key as input
    printf("key: ");
    i=0;
    scanf("%c",&key[i]);
    i++;
    while(key[i-1]!='\n')
    {
        scanf("%c",&key[i]);
        i++;
    }

    //creating newkey (with no spaces and only distinct alphabets)
    char newkey[26];
    int count=0;
    int len1=strlen(key);
    for(i=0;i<len1;i++)
    {
        if(alpha[key[i]-'a'] || key[i]==' ')
        {
            continue;
        }
        else
        {
            newkey[count]=key[i];
            alpha[key[i]-'a']=1;
            count++;
        }
    }

    //hashing using newkey
    for(i=0;i<26;i++)
    {
        if(hash[newkey[i]-'a']==' ')
        {
            hash[newkey[i]-'a']=i+97;   //i+97 typecasted into the corresponding character and stored in hash[]
        }
        else
        {
            continue;
        }
    }

    // taking message from user
    char message[100];
    printf("message: ");
    i=0;
    scanf("%c",&message[i]);
    i++;
    while(message[i-1]!='\n')
    {
        scanf("%c",&message[i]);
        i++;
    }
    int len2=strlen(message)-1;
    char dec[len2+1];   //decoded string

    //using hash table to decode message
    for(i=0;i<len2;i++)
    {
        if(message[i]!=' ')
        {
            dec[i]=hash[message[i]-'a'];
        }
        else
        {
            dec[i]=' ';
        }
    }

    //printing decoded string
    printf("decoded: ");
    for(i=0;i<len2;i++)
    {
        printf("%c",dec[i]);
    }
    return 0;
}