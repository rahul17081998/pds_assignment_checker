#include<stdio.h>
struct node{
int KEY;
char C;                     // creating a data structure and mapping the key elements with integers and the corresponding right element
char D;
struct node*next;
};
struct node createnewnode(int i)
{node=node*malloc(sizeof node)
 KEY=i;
C=arr[i];
D=B[i];
next->NULL;
return node;
}
int chartoint(char B[],int Z)
{int i;                    // function that finds out the smallest possible Z that is present in B upto that particular moment
for(i=0;i<26;i++)
{
if(Z==B[i])
{
printf("the new char have to be replaced by the next one");

return i%26;                       // took 26 as the size of hash table
}

}

}

int main()
{
char B[150];
int i,j;
char arr[26],Z,msg[100];
for(i=0;i<26;i++)
{
arr[i]='a'+i;                  // creating a an array containing the alphabet in order

}
printf("enter key");           
for(i=0;i<26;i++)
{
B[i]="/0";
}
for(i=0;i<26;i++)
{
scanf("%c",&B[i]);                    // scanning the elements of of array b which is also reffered as key
Z=B[i];
if(chartoint(B,B[i])<i)              // making sure that no element in array b is repeated
{
i--;
B[i]='\0';

}
}
for(i=0;i<26;i++)
{
node[i]=createnewnode(i);             // creating nodes for easy access of elements
printf("%d  %c  %c\n",node[i].key,node[i].C,node[i].D);
}
printf("enter the the message that has to be decoded");
scanf("%c",msg);
for(i=0;msg!='\0';i++)
{
for(j=0;j<26;j++)             // decoding the message
if(msg[i]==B[j])
{
printf("%c"node[j]->C);
}
}




}
