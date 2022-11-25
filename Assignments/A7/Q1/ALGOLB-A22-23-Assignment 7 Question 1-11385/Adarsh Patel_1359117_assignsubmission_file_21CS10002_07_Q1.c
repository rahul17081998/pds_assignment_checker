#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct dataItem
{
    char key;
    char alphabet;
};

struct dataItem* hashArray[26]; // defining the hashtable which consists of 26 elements.

int main()
{
    int i,j=0,k,l,m,count;
    size_t max_size=500;
    char *key=(char*)malloc(max_size*sizeof(char)); // Stores the entered key.
    printf("Enter the key: ");
    getline(&key,&max_size,stdin);
    l = strlen(key);
    printf("key = ");
    for(i=0;i<l;i++)
    {
        printf("%c",key[i]);
    }
    printf("\n");
    printf("Enter the message: ");
    char *message=(char*)malloc(max_size*sizeof(char)); // Stores the entered message.
    getline(&message,&max_size,stdin);
    m = strlen(message);
    printf("message = ");
    for(i=0;i<m;i++)
    {
        printf("%c",message[i]);
    }
    printf("\n");
    for(i=0;i<26;i++)
    {
        hashArray[i]->alphabet = 'a'+i; // Defines the alphabet component of hashtable as the english alphabets 'a' to 'z'.
    }
    for(i=0;i<l;i++)
    {
        count=1;
        for(k=0;k<i;k++){
            if(key[k]==key[i])
            count++;
        }
        if(key[i] != '\0' && count==1){ // Defines the key component of hashtable as the key entered in input.
            hashArray[j]->key = key[i]; // It does not include the blankspaces and the repeated characters.
            j++;
        }
    }
    char *decmsg=(char*)malloc(m*sizeof(char)); // Stores the decoded message.
    for(i=0;i<m;i++)
    {
        if(message[i] == '\0') // If there is blank space in the entered message then the decoded message stores as it is.
           decmsg[i] = message[i];
        else{
            for(j=0;j<26;j++){ // Else characters of the message is compared with the key component of hashtable and the corresponding alphabet component of hashtable is used in the decoded message.
                if(hashArray[j]->key == message[i]) 
                    decmsg[i] = hashArray[j]->alphabet;
            }
        }
    }
    printf("\n");
    printf("Decoded message: ");
    for(i=0;i<m;i++)
    {
        printf("%c",decmsg[i]);
    } 
    return 0;
}
