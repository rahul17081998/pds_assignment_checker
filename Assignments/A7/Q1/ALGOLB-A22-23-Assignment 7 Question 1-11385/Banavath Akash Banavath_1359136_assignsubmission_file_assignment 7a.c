/* name : banavath akash
roll no :21CS30010
dept : computer science and engineering
mechin no :05 */
#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};
void sortedinsert(struct node  **h,int x)
{
  struct node *t,*q=NULL,*p=*h;
  t=(struct node*)malloc(sizeof(struct node));
  t->data=x;
  t->next=NULL;

  if(*h==NULL)
  *h=t;
  else
  {
     while(p &&p->data<x)
     {
      q=p;
      p=p->next;
     }
     if(p==NULL)
     {
      q->next=t;
     }
     else
     {
      t->next=q->next;
      q->next=t;
     }
    }
}
struct node *search(struct node *p,int key)
{
  while(p!=NULL)
  {
  if(key=p->next)
  {
   return p;
  }
  }
  p=p->next;
}
int hash(int key)
{
 return key%26;
}
void insert(struct node *h[],int key)
{
 int index=hash(key);
 sortedinsert( &h[index],key);
}
int main()
{
struct node *ht[26];
int i;
struct node *temp;

  char key[50],messages[50];
  char a b c d[50]= 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z';
 for( i=0;i<=50;i++)
  scanf("%d ",&key[i],&messages[i]);

  for(i=0;i<=50;i++)
  scanf("%c ",&messages[i]);

  for(i=0;i<50;i++);
  scanf("%c ",& ar[i]);

  for( i=0;i<26;i++)
  ht[i]=NULL;
  temp=search(ht[hash(key)],messages);
 printf("%d ",temp->data);

return 0;
}



