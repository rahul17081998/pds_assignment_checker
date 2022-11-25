#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
Tanishq Choudhary
21CS10070
*/

/*
    
*/

void contructSubstitutionTable(char key[],char sortedCipherKey[])
{
    //this creates a hash table 
    int n,i,j;
    n=strlen(key);
    for(i=0;i<n-1;i++){   
        sortedCipherKey[key[i]-'a']='a'+i;
    }
}

void decodeMessage(char secretMessage[],char sortedCipherKey[],char decodedMessage[])
{
    int n,i;
    n=strlen(secretMessage);

    for(i=0;i<n-1;i++){
        if(secretMessage[i]==' '){
            decodedMessage[i]=' ';
        }
        else{
            decodedMessage[i]=sortedCipherKey[secretMessage[i]-'a'];
        }
    }
}

int main()
{   
    size_t max_size=52;

    char *cipherKey = (char*)malloc(max_size*sizeof(char));
    getline(&cipherKey,&max_size,stdin);
    char *secretMessage = (char*)malloc(max_size*sizeof(char));
    getline(&secretMessage,&max_size,stdin);
    printf("%s %s\n",cipherKey,secretMessage);
    char sortedCipherKey[50],decodedMessage[50];
    contructSubstitutionTable(cipherKey,sortedCipherKey);
    printf("%s\n",sortedCipherKey);
    decodeMessage(secretMessage,sortedCipherKey,decodedMessage);

    printf("%s\n",decodedMessage);

    return 0;
}

