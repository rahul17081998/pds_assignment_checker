#include <stdio.h>
#include <stdlib.h>
#define size 26
struct dataitem{
 char key;
 char alp;
};
 
 struct dataitem* hasharray[size];
 int hashcode(char a)
{
    int i = a-97;
  return i;
} 
 void insert(char a,char b)
 {
    int hashindex = hashcode(a);
    struct dataitem* item = ( struct dataitem* )malloc(sizeof(struct dataitem));
      item->key = a;
      item->alp = b;
   hasharray[hashindex] = item;
  return;
}
int main()
{
   char str[100],mes[100];
   int i;
   int count = 0;
   fgets(str,100,stdin);
    fgets(mes,100,stdin);
   char arr[26] = {0};
   for(i=0;str[i]!='\n';i++)
  {  
    if(arr[str[i]-97] == 0 && str[i]!=' ')
    {
       insert(str[i] , 'a'+count);
       count++;
        arr[str[i]-97]  = 1;
    }
  }
    for(i=0;mes[i]!='\n';i++)
 { 
   if(mes[i] == ' ')
   printf(" ");
  else
  printf("%c",hasharray[mes[i]-97]->alp);
}
 return 0;
}
