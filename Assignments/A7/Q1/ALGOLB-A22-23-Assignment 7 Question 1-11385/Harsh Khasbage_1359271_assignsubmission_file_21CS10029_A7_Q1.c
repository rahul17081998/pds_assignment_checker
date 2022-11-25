// 		   NAME: HARSH KHASBAGE
// 	    ROLL NO.: 21CS10029
// ASSIGNMENT NO.: 7

#include <stdio.h>
#include <string.h>

// hash table 
char hash[100];

struct element{
    char*str;
    int value;
};

struct element arr[10];

int size=0;

void int_arr()
{
    for(int i=0;i<10;i++)
    {
        arr[i].str=NULL;
        arr[i].value=-1;
    }
}

void insert(char*str,int value)
{
  int hashindex=hashcode(str);
  int i=hashindex;
  while(arr[i].str!=NULL)
  { 
    if(arr[i].str==str)
    {
      printf("The element already exists \n");
    }
    i=(i+1)%10;
    if(i==hashindex)
    {
        printf("element cannot be inserted as hashtable is full \n");
        return;
    }
  }
  if(arr[i].str==NULL)
  {
    arr[i].str=str;
    arr[i].value=value;
    size++;
    printf("The element has been inserted \n");
  }
}

int main()
{
//	char key[100];
//	char message[100];

	char* key;
	char* message;
	
	int_arr();
  	insert("eljuxhpwnyrdgtqkviszcfmabo",0);
  	display();
  	
	return 0;
}
