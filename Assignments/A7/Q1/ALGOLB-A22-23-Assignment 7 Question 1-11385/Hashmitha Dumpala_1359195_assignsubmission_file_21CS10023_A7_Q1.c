#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//creating a hash table
struct set
{
int key;
int data;
};
struct set *array;
int capacity=26;
int size=0;
int hashfxn(int key)
{
return (key%capacity);
}

void initialise_arr()
{
array=(struct set*)malloc(capacity*sizeof(struct set));
for(int i=0;i<capacity;i++)
{
array[i].key=0;
array[i].data=0;
}
}
void insert(int key,int data)
{
int index=hashfxn(key);
if(array[index].data=0);
{
array[index].key=key;
array[index].data=data;
size++;
}
if(array[index].key==key)
{
array[index].data=data;
}
}
int search(int key)
{
int index=hashfxn(key);
int counter=0;
while(counter<size)
{
if(array[index].key==key)
{
return index;
}
++counter;
++index;
index%=size;
}
return -1;
}

int main()
{
initialise_arr();
char key[100];
gets(key);
printf("\n");
char message[100];
gets(message);
for(int i=0;i<26;i++)
{
array[i].key=key[i];
}



}
