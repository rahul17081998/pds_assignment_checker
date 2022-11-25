//Name - Manaswi Raj
//Roll - 21CS10088
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100//defining max
#define SIZE 150//defining size
struct node
{
    int key;
    int value;
    struct node *next;
};
struct node *hashTable[SIZE];//declaring hash table
int hashCode(int key)
{
    return key % SIZE;
}
struct node *search(int key)
{
    int hashIndex = hashCode(key);
    struct node *temp = hashTable[hashIndex];
    while (temp != NULL && temp->key != key)
        temp = temp->next;
    return temp;
}
void insert(int key, int value)//insert function to create new hash
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    int hashIndex = hashCode(key);
    if (hashTable[hashIndex] == NULL)
        hashTable[hashIndex] = newNode;
    else
    {
        //separate chaining put at the end of the list
        struct node *temp = hashTable[hashIndex];
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
}
void delete (int key)//delete function
{
    int hashIndex = hashCode(key);
    struct node *temp = hashTable[hashIndex];
    struct node *prev = NULL;
    if (temp == NULL)
        return;
    while (temp->next != NULL && temp->key != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp->key == key)
    {
        if (prev == NULL)
        {
            hashTable[hashIndex] = temp->next;
        }
        else
        {
            prev->next = temp->next;
        }
        free(temp);
    }
}
void display()//display function
{
    int i = 0;
    for (i = 0; i < SIZE; i++)
    {
        printf("(%d):", i);
        struct node *temp = hashTable[i];
        while (temp != NULL)
        {
            printf(" -> %d", temp->value);
            temp = temp->next;
        }
        printf("\n");
    }
}
int main()
{
    size_t max_size=100;    
    printf("Enter the key and code respectively:\n");
    char *keyS = (char*)malloc(max_size*sizeof(char));
    getline(&keyS,&max_size,stdin);//inputting line of strings
    char *code = (char*)malloc(max_size*sizeof(char));
    getline(&code,&max_size,stdin);
    int i;
    //mapping key with abcdefghijklmnopqrstuvwxyz
    for(i=0;i<strlen(keyS)-1;i++){
        insert(keyS[i],i+97);
    }//code mapped
    char ans[200];
    for(i=0;i<strlen(code)-1;i++){
        if(code[i]==' ') ans[i]=' ';
        else 
        ans[i]=hashTable[code[i]]->value;
    }
    printf("The final result is :\n%s\n",ans);//printing decoded code

}
