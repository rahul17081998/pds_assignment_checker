/*
Section 14
Roll No : 22CE10005
Name : #Aman Meena#
Assignment No : 7
Description : to write a program which reads two strings andcheck iif they are anagram or not*/


#include<stdio.h>


int min_loc( int x[]  ,  int k , int size)  {              


        int j , pos ;


        for( j = k + 1 ; j < size ; j++ ) {                             

              if( x[j] < x[pos])pos = j  ;                  //Condition for finding minimum value.


return j;

}

}


// Function to select the position to interchange .

int
int main() {

      int k , x_[] , pos , size_ ;
         
         printf("The Array in Ascending order is : %d/n", x_[pos]);  //Input array in ascending order ._sel_loc(int x[] ,int size) {


int temp , j ;                            //Defining a temporary variable temp to interchange the value of x[j] and x[pos] .


         for( k = 0 ; k < size - 1 ; k++ ) {

            int min_loc( int x[] , int k , int size);

      

         temp = x[j];

         x[j] = x[pos];                            //INTERCHANGING THE VALUES.

         x[pos] = temp;

}


         return x[pos];

}
