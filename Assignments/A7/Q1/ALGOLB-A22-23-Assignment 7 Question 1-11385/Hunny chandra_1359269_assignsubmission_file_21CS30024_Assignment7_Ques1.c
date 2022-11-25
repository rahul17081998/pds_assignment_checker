//Name:HUNNY CHANDRA
//Roll No:21CS30022
//ASSIGNMENT:7 qUES 1
#include <stdio.h>
#include <string.h>

int main()
{
char key[100],message[100];
int i=0;
int insert[26], list[26],t[26];
for ( i = 0; i < 26; i++)
{
    insert[i]=0;
    list[i]=0;
    t[i]=0;
}
for (i = 0; i < 100; i++)
{
    key[i]='\0';
    message[i]='\0';
}

printf("Enter key : ");
scanf("%s",key);
int j=0;
for ( i = 0; i < 100 ; i++)
{
    int x=(int)key[i]-97;
    if(key[i]!='\0' && insert[x]==0)
    {
        list[j]=x;
        j++;
        insert[x]=1;
    }
}

for ( i = 0; i < 26; i++)
{
    t[list[i]]=i;
}

printf("Enter CODemessage : ");
scanf("%s",message);
for ( i = 0; i < sizeof(message); i++)
{  
    if(message[i]<123 && message[i]>96)
    {
        printf("%c", t[(int)message[i]-97]+97);
    }
    else
    {
        printf(" ");
    }
}

return 0;
}
