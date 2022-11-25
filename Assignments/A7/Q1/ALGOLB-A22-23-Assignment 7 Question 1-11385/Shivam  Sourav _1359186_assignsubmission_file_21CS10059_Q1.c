/*SHIVAM SOURAV
  21CS10059
  SYSTEM NUMBER 17
  ASSIGNMENT 7
*/
#include <stdio.h>
#include <string.h>
//initialising the english alphabet to a table of size 26
char t[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main()
{
    char key[100],mes[100];
    printf("enter the key");
    fgets(key,sizeof(key),stdin);//using fgets function to take input of a line
    printf("enter the message");
    fgets(mes,sizeof(mes),stdin);
//table is a hashtable of length 26 which stores the first appearance of a letter in the substitution table
    int table[26],i;
//initialising all hashmaps to -1
    for(i=0;i<26;i++)
    {
        table[i]=-1;
    }
    int j=0;

    for(i=0;key[i]!='\n';i++)
    {
/*if the letter of the key is a space character or has been traversed before we ignore it 
otherwise we map it to the next available alphabet in ascending order*/
        if(key[i]!=' ' && table[key[i]-'a']==-1){
        table[key[i]-'a']=j++;}
        
    }
    printf ("Decoded message \n");
    for(i=0;mes[i]!='\n';i++)
    {
        if(mes[i]==' '){ printf(" ");}
        else printf("%c",t[table[mes[i]-'a']]);
    }


    return 0;
}
