/* name: abhiram naik
rol no: 21CS10003*/
#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>

#define size 25
struct data item{
    int data;
    int key;
};
struct dataitem* hashArray[size];
struct dataitem* dummyitem;
struct dataitem* item;
int hashcode(int key){
    return key % size;
}
struct dataitem *search(int key){
    //get the hash
    int hashindex = hashcode(key);
//move in array untill an empty
while(hasharray [hashindex] !=NULL){
if(hasharray[hashindex]->key ==key)
return hasharray[hashindex];
//go to next cell
++hashindex;
//wrap around the table
hashindex %=size;
}
return NULL;
}
void insert (int key, int data)
{
    struct  dataitem *itam =(struct Dataitem*)
item-> data =data;
item->key =key;
// get the hash 
int hashindex =hashcode(key);
while (hashArray[hashindex] ! = null && hasharray[hashindex]-key != -1){
    //go to next cell
    ++hashindex;
    hashindex %=size;
}    
hahsarray[hahsindex] = item;
    
}
struct  dataitem* delete(struct dataitem* item)
{
int key = item->key;
//get the hash
int hashindex = hashcode(key);
//move in array untill an empty
while (hasharray[hashindex] ! NULL){
    if(hasharray[hashindex]-key)
}
};

