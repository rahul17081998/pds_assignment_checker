//Raj Parikh
//21CS30039
//ASSIGNMENT 7 Q1
//TABLE NUMBER 50

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#define size 26

int curr_size =0;

struct decode
{
    char ch;
    char val;
    int status;
};

//hash table 
struct decode hash_table[size];

//initialzing the hash table
void init()
{
    for(int i=0;i<size;i++)
    {
        //hash_table[i].val=i+97;
        hash_table[i].status=0;
    }
}

//hash function
int hash(char ch)
{
    return (int)ch%size; 
}

//inserting elements in the hash table
void insert(char ch)
{
    int index= hash(ch);
    for(int i=0;i<size;i++)
    {
        int idx = (index +i)%size;
        if(hash_table[idx].status ==0)
        {
            hash_table[idx].ch = ch;
            hash_table[idx].val = curr_size+97;
            hash_table[idx].status =1;
            curr_size++;
            return;
        }
        else if(hash_table[idx].status==1)
            return;
    }
}

//returning the decoded value of the corresponding input key from the hash table
char search(char ch)
{
    int index = hash(ch);
    for(int i=0;i<size;i++)
    {
        int idx = (index + i)%size;
        if(hash_table[idx].ch==ch)
            return hash_table[idx].val;
    }
}

int main()
{
    printf("Enter a key: ");
    char *key= (char *)malloc(sizeof(char)*1000);
    int len1=0;
    for(int i=0;i<1000;i++)
    {
        scanf("%c",&key[i]);
        if(key[i]=='\n')
        {
            len1=i;
            break;
        }
    }
    //scanf("%s",key);
    printf("Enter a message: ");
    int len2=0;
    char *message = (char *)malloc(sizeof(char)*1000);
    for(int i=0;i<1000;i++)
    {
        scanf("%c",&message[i]);
        if(message[i]=='\n')
        {
            len2=i;
            break;
        }
    }
    //scanf("%s",message);
    
    init();
    //int len = strlen(key);
    //insert the elements in the hash table
    for(int i=0;i<len1;i++)
    {        
        if(key[i]!=' ')
            insert(key[i]);
    }
    
    printing the decoded message using search function defined above
    for(int i=0;i<len2;i++)
    {
        if(message[i]==' ')
            printf(" ");
        else
            printf("%c",search(message[i]));    
    }
    printf("\n");
    return 0;
    
}
