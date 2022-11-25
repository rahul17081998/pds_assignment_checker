/*questiion 1 

Swarnabh Mandal 21CS10068
logic this code uses the fundamental idea of hashing
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define FOR(i,n) for(i=0;i<n;i++)

int main()
{

int i,a[26],x;
size_t maxsize=100;
char *mssg=(char*)malloc(maxsize*sizeof(char));

FOR(i,26)
{
    a[i]=0;
}
    char key[50],message[50];
    int map[26];
    printf("Enter the key\n");
    scanf("%s",key);
    FOR(i,26)
{
    if(!a[i]&&key[i]!=' ') // if key contains space just skip it else if key is already mapped skip it
    {
        map[key[i]-'a']=i; //this is the mapping function for example if key[i]='b'&i=3 then  
        a[i]=1;             // we replace b in the encoded message with 'a'+3=d
    }

 }
 
//printf("%c - %c\n",'a'+i, 'a'+ map[i]); gives correct map 
//    fflush(stdin);
//     printf("Enter the message");
//     getline(&mssg,&maxsize,stdin);

//     printf("%s",mssg);
   

    /*******please hardcode the message in mssg array because some error is being showed*******/
    /*asked TA about this but no sol***/

    // decode function:
      while(mssg[i]!='\n')
      {
          if(mssg[i]==' ') 
          continue;
          else
         {
             x=map[mssg[i]-'a'];  // 
            mssg[i]='a'+x;
         }


    }
    printf("\n%s",mssg);
    
   return 0;
    }