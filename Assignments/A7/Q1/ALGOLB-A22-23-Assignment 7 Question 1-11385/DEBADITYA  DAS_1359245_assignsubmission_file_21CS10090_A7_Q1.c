//21CS10090
//Debaditya Das - Q1
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j;
    char key[50];
    char msg[50];
    printf("Enter key: ");
    fgets(key, 50, stdin);
    printf("Enter message: ");
    fflush(stdin);
   // fflush(stdout);
    fgets(msg, 50, stdin);
    //printf("%s ", key);
    //printf("%s\n", msg);
    char ht[123];
    for(i=0;i<123;i++) ht[i]=NULL;
    int ct=0;
    int u[123];
     for(i=0;key[i]!=NULL;i++) if(key[i]=='\n') key[i] = NULL;
     for(i=0;msg[i]!=NULL;i++) if(msg[i]=='\n') msg[i] = NULL;
    for(i=0;key[i]!=NULL;i++)
    {
        //printf("%c",key[i]);
        if(key[i]!=' ' && ht[key[i]]==NULL){
        ht[ct++] = key[i];
        int p = key[i];
        ht[p] = '@';
        u[p]=ct-1;
        }
    }//creation of hash table
    //for(i=0;i<26;i++) printf("%c ",ht[i]);
    printf("\n");
    char res[50];
    int ct1 = 0;
    for(i=0;msg[i]!=NULL;i++)
    {
        if(msg[i]=='\n') continue;
        if(msg[i]==' ') res[ct1++] = ' ';
        else
        {
            int q = msg[i];
            int z = u[q];
            res[ct1++]=(char)(z+97);
            }
    }
    printf("%s ",res);
    //the quick brown fox jumps over the lazy dog
    //vkbs bs t suepuv
}
