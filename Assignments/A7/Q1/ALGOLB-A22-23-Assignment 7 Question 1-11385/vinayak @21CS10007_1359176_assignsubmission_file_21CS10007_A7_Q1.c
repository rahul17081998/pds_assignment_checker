Name: A.vinayak khanna
Roll No: 21CS10007
Assignment: 7
question:1

#include <stdio.h>
#include <math.h>
#include <string.h>
struct pair {
	char key;
	char value;
};

int main() 
{
 char A[40],B[40],C[26],key,temp;
 int i,j,n,m,k;
 i=0;
 j=0;
 struct pair hash_tag[char key];
 C={a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
 printf{"key="};
 scanf("%s", A);
 printf("\n");
 while(TRUE)
 {
  temp=A[i];
  i++;
 }
 n=i
 printf{"message="};
 scanf("%s", B);
 while(TRUE)
 {
  temp=B[j];
  j++;
 }
 printf("\n");
 m=j;
 for(i=0;i<n;i++)
 {
  int k=0;
  for(j=0;j<i;j++)
  {
   if(A[i]=!A[j])
   {
    k++;
    }
   }
  if(k=!i)
  {
   A[i]=NULL;
   }
   }
   j=0;
 for(i=0;i<n;i++)
 {
  if(A[i]=!NULL)
  {
   hash_tag[A[i]].value=C[j];
   hash_tag[A[i]].key=A[i];
   j++;
  }
  }
  printf("Decoded message =");
 
 for(i=0;i<m;i++)
 {
  if(B[i]=! NULL)
  {
   printf("%c",hash_tag[B[i]].value);
  }
  if(B[i]== NULL)
  {
   printf("%c",B[i]);
  }
  }
 printf("\n");
 return 0;
 }




























