/*NAME : SIMMA PAVAN KUMAR
ROLL NO. : 21CS10060
DEPARTMENT : COMPUTER SCIENCE
MACHINE : 63*/

#include <stdio.h>
#include <stdlib.h>

   int main(){
      char h[26], A, mes[100];
      int i, j;
      //input
      printf("Enter the key elements without repitition of alphabets : \n");
      for(i=0; i<26; i++){
         scanf("%c", &A);
         //hashing with the ASCII code
         if(A!=' '){
         h[A-97]=97+i;
         }
      }
      getchar();
      printf("Enter the message elements : \n");
      for(i=0; i<100; i++){
         scanf("%c", &mes[i]);
         if(mes[i]=='\n')break;
      }
      //output
      printf("Decoded message : \n");
      for(j=0; j<i; j++){
         if(mes[j]==' '){
            printf(" ");
         }
         else {
            printf("%c", h[mes[j]-97]);
         }
      }
      printf("\n");
      return 0;
   }
