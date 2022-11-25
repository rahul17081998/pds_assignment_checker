#include<stdio.h>
#include<string.h>

int main(){              
  int n;
  printf("Enter the size of first string : ");    //dont include spaces in the string
  scanf("%d",&n);
  char m[n],d[26];                       
  scanf("%s",m);                                        
  int a[26]={0},i,x,j=0;
  char b[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  
  for(i=0;i<n;i++){                   //we are making the hash table 
    if(a[m[i]-'a']==0){               // checking if the element is repeated or not
      x = m[i]-'a';
      //printf("%d %d ->",x,j);
      d[x] = b[j];                    // saving the elements in hash table;
      j++;
      //printf("%c \n",d[x]);
      a[x]++;
    }
  }
  
  int k;
  printf("Enter the size of second string : ");
  scanf("%d",&k);
   
  char key[k],p;
  scanf("%s",key);
  printf("\n The decoded password is : ");                     //printing the decoded password
  for(i=0;i<k;i++){
    p = d[key[i]-'a'];
    printf("%c",p);
  }
   
   
  printf("\n");
  return 0;
}
