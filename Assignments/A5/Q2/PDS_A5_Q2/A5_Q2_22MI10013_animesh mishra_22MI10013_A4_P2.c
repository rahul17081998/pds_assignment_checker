
/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:5
discription : co prime numbers
*/
#include<stdio.h>
int coprime(int num1, int num2)
{
    int min, count, flag = 1;
    min = num1 < num2 ? num1 : num2;
     for(count = 2; count <=min; count++)
    {
    if( num1 % count ==0 && num2 % count == 0)
        {  
              flag = 0;
              break;
    }
  }
 
    return(flag);
}  

int main()
{
     int n1, n2;

  printf("enter 2 positive numbers\n");
  scanf("%d%d" , &n1,&n2);

  if( coprime(n1 ,n2) )
  {
    printf("%d and %d are coprime.\n" , n1, n2);
     }
     else
     {
         printf("%d and %d are not co prime.\n" , n1 , n2);
      }

   return 0;
}
