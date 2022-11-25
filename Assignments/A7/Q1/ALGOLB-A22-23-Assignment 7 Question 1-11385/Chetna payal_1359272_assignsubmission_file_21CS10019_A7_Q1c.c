#include<stdio.h>
#include<stdlib.h>
#define SIZE 26

struct node
{ char key;
  char value;
  struct node *next;
 };
 
struct node* hashTable[26];

struct node* search(char key)
{ int hashIndex;

  struct node* temp = hashTable[hashIndex];
 
  while(temp!= NULL && temp->key !=key)
   temp= temp->next;
   return temp;
 }

void insert(char key,char value)
{ struct node* newNode = (struct node*)malloc(sizeof(struct node));
  newNode->key =key;
  newNode->value =value;
  newNode->next =NULL;

 if(hashTable[hashIndex] == NULL)
  hashTable[hashIndex] =newNode;
 else{
   struct node* temp = hashTable[hashIndex];
  while(temp->next !=NULL)
  temp= temp->next;
  temp->next =newNode;
 }
}

void display()
{ int i=0;
  for(i=0;i<26;i++)
  { printf("%c",i);
    struct node* temp = hashTable[i];
   
  while(temp !=NULL)
 { temp= temp->next;}
  printf("\n");
}
}

int main()
{
  char key[26],message[100];
  int i,j,n;

 printf("key :");
 for(i=0;i<26;i++)
 { scanf("%s",&key[i]);}

 printf("length of messaage:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{  scanf("%s",&message[i]); 
   }

insert(a,e);
insert(b,l);
insert(c,j);
insert(d,u);
insert(e,x);
insert(f,h);
insert(g,p);
insert(h,w);
insert(i,n);
insert(j,y);
insert(k,r);
insert(l,d);
insert(m,g);
insert(n,t);
insert(o,q);
insert(p,k);
insert(q,v);
insert(r,i);
insert(s,s);
insert(t,z);
insert(u,c);
insert(v,f);
insert(w,m);
insert(x,a);
insert(y,b);
insert(x,o);

for(i=0;i<26;i++){
search(message[i]);
}
 display();

return 0;
}


