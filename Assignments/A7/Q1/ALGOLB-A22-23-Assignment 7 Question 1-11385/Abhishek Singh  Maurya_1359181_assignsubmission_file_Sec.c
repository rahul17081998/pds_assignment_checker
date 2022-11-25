#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 26;
struct dataitem
{
    int data;
    int key;
};
struct dataitem *array[26];
struct dataitem *dummyitem;
struct dataitem *item;

int hashcode(int key)
{
    return key % SIZE;
}
struct dataitem *search(int key)
{
    int hashindex = hashcode(key);
    while (array[hashindex] != NULL)
    {
        if (array[hashindex]->key == key)

        {
            return array[hashindex];
        }
        ++hashindex;
        hashindex %= SIZE;
    }
    return NULL;
}
void insert(int key, int data)

{
    struct dataitem *item = (struct dataitem *)malloc(sizeof(struct dataitem));
    item->data = data;
    item->key = key;
    int hashindex = hashcode(key);
    while (array[hashindex] != NULL && array[hashindex]->key != -1)
    {
        ++hashindex;
        hashindex %= SIZE;
    }
    array[hashindex] = item;
}

struct dataitem *delete (struct dataitem *item)
{
    int key = item->key;
    int hashindex = hashcode(key);
    while (array[hashindex] != NULL)
    {
        if (array[hashindex]->key == key)
        {
            struct dataitem *temp = array[hashindex];
            array[hashindex] = dummyitem;
            return temp;
        }
        ++hashindex;
    }
    hashindex %= SIZE;
    return NULL;
}


void display()
{
    int i = 0;
    for (int i = 0; i < 26; i++)
    {
        if (array[i] != NULL)
        {
            printf("(%d,%d)", array[i]->key, array[i]->data);
        }
        else
            printf("--");
    }
    printf("\n");
}
int main()
{
    char Alphabet[] = {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z};
    char key[26];
    for (int i = 1; i <= 26; i++)
    {
        scanf("%c", &key[i]);
    }
    dummyitem = (struct dataitem *)malloc(sizeof(struct dataitem));
    dummyitem->data == -1;
    dummyitem->key = -1;
    for (int i = 0; i < 26; i++)
    {
        insert(Alphabet[i], key[i]);
    }
    display();
    char message[26];
    for (int i = 0; i <= 26; i++)
    {
        scanf("%c", &message[i]);
    }

    for (int i = 0; i < 26; i++)
    {
        item = search(message[i]);
    }
    for (int i = 0; i < 26; i++)
    {
        if (item != NULL)
        {
            printf("%d", item->data);
        }
    }
}