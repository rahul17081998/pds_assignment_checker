#include<stdio.h>
#include<stdlib.h>
#define size 26
 struct node{

 int data;
 struct node*next;
};
struct node*chain[key];
void init()
{
 int i;
 for(i=0;i<size;i++)
 {
   chain[i]=key;
 }
}
void insert(int data)
{
 struct node*newnode=malloc(sizeof(struct node));
 newnode->data=value;
 newnode->key=NULL;
}

