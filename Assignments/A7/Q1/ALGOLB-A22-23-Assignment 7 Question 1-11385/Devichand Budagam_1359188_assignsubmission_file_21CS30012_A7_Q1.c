//name:Devichand
//roll.no:21CS30012
//system.no:6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define size 26
struct node{
       char a;
       char b;
       struct  node* next;
};
struct node* hashtable[size];
void insert(char a,char b)
{
   static int index=0;
   struct node* newnode=(struct node*)malloc(sizeof(struct node));
   newnode->a=a;
   newnode->b=b;
   newnode->next=NULL;
   hashtable[index]=newnode;
   index=index+1;
   return;
}
void traverse(char b[])
{
    int i,j;
    int x=strlen(b);
    for(i=0;i<size;i++){
       for(j=0;j<x;j++){
          if(hashtable[i]->a==b[j]){
            printf("%c",hashtable[i]->b);
          }
       }
    }
    return;
}
int main()
{
   int i,j,flag;
   char a[100],b[100],c='a';
   int x=strlen(a);
   printf("enter the key:");
   scanf("%s",a);
   printf("enter the message:");
   scanf("%s",b);
   for(i=0;i<x;i++){
       flag=0;
       for(j=0;j<i;j++){
           if(a[i]==a[j]){
             flag=1;
           }
       }
       if(flag==0){
         insert(a[i],c);
         c=c+1;
       }
   }
   traverse(b);
   return 0;
}
