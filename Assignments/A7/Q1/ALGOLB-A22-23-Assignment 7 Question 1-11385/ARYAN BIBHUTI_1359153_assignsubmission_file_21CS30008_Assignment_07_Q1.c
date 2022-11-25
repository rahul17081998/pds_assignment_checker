/* Name : ARYAN BIBHUTI
   Roll No.: 21CS30008
   Dept : Department of Computer Science and Engineering
   Machine no. : 04 */

# include <stdio.h>

int main()
{
   char key[50], message[50];
   char ABCD[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

   int i=0, check[26], HT[26];
   
   for(i=0; i<26; i++)
   {
      check[i] = 0;
      HT[i] = 0;
   }
 
   i = 0;
   
   printf("key = ");
   scanf("%[^\n]", key);
   

   printf("message = ");
   scanf("%[^\n]", message);

   while(key[i] != '\0')
   {
      if((key[i]!=' ') && (check[(int)(key[i] - 'a')]!=1))
      {
          HT[(int)(key[i] - 'a')] = i;
          check[(int)(key[i] - 'a')]++;
      }
 
      else continue;
      break;
      i++;
   }

   printf("Decoded message:  ");

   i = 0;

   while(message[i] != '\0')
   {
      if(message[i] != ' ') 
      {
        printf("%c", ABCD[HT[(int)(message[i] - 'a')]]);
      }

      else 
      {
        printf(" ");
      }

      i++;
   }

   return 0;

}
