//Name:Jay Priyadarshi
//Roll No:21CS30026
//ASSIGNMENT:7_q1
#include <stdio.h>
#include <string.h>

int main()
{
char key[100],message[100];
int inserted[26], list[26],todecode[26];
for (int i = 0; i < 26; i++)
{
    inserted[i]=0;
    list[i]=0;
    todecode[i]=0;
}
for (int i = 0; i < 100; i++)
{
    key[i]='\0';
    message[i]='\0';
}
// list will contain letter in order thet they appear first time
printf("Enter key : ");
gets(key);
int j=0;
for (int i = 0; i < 100 ; i++)
{
    int x=(int)key[i]-97;
    if(key[i]!='\0' && inserted[x]==0)
    {
        list[j]=x;
        j++;
        inserted[x]=1;
    }
}
// todecode will contain letter which will be printed corresponding to each letter
// starting from index 0...25 for a...z
// ex- if e appears in message then we will print todecode[4]+97  ||   4 : 5th place in array corresponding to e
for (int i = 0; i < 26; i++)
{
    todecode[list[i]]=i;
}

printf("Enter message : ");
gets(message);
for (int i = 0; i < sizeof(message); i++)
{  
    if(message[i]<123 && message[i]>96)
    {
        printf("%c", todecode[(int)message[i]-97]+97);
    }
    else
    {
        printf(" ");
    }
}

return 0;
}
