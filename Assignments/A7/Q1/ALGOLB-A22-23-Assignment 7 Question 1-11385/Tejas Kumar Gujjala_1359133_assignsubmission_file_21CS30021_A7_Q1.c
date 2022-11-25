/******************************************************************************
			Name : Tejas Kumar Gujjala
			Roll No : 21CS30021
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hashkey(char k)
{
    return k;
}

void hashing(char s[], char hashtable[])
{
    char h = 'a';
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            hashtable[' '] = ' ';// keeping the ' '(white space) as it is 
        else
        {
            hashtable[hashkey(s[i])] = h;// arranging alphabets to the given key into the hashtable 
            h++;
        }
    }
}

int main()
{

    char key[150], hashtable[200], message[50];
    scanf("\n");
    scanf("%[^\n]s",key);// taking the key as input such that it will take until next line comes i.e.. it will take white spaces too
    scanf("\n");
    scanf("%[^\n]s",message);// taking the message as input such that it will take until next line comes i.e.. it will take white spaces too
    hashing(key, hashtable);
    for (int i = 0; i < strlen(message); i++)
    {
	if (message[i]==' '){
			      printf(" ");				
				}       
	 else printf("%c", hashtable[message[i]]);// decoding the message and printing it
    }
}
