#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*NAME: P.Datta Ksheeraj
  ROLL - 21CS30037
  System no - 77
  Assignment no- 7
  Question_number- 1
  part- a(only 1 part present)*/

typedef struct map // Declaration of node
{
    int data;
    char string[100];  //for the letter to be encrypted
    char string2[100]; // for the letter to which the previous letter is mapped
    
} map;

typedef map *MAP; //typdef of pointer to map structure

int N = 0, M = 26, number = 0; // M for number of pointers , number used for mapping the immediate next alphabet available

MAP pointer[40]; // creates an array of pointers each of type: map structure

void initialize()  // each pointer initialized to NULL
{
    int i;
    for (i = 0; i < M; i++)
    {
        pointer[i] = NULL;
    }
}

void insert(char string[])
{
    // create a newnode with value equal to ascii value of string
    MAP newNode = malloc(sizeof(map));
    int value = 0;
    
    for (int i = 0; i < strlen(string); i++) // runs only 1 time as only a single character is being coded
    {
        newNode->string[i] = string[i];
        value += string[i];  // calculating ascii value of the character
    }
    newNode->string[strlen(string)] = '\0'; //assigned the last index to null character to make it a string

    value = value-97; // value subtracted with 97 gives the index of it in alphabets ex: a-0, b-1, c-2
    newNode->data = value;
    
    

    // calculate hash index
    int index = value % M;   // as M = 26 and value always will be a number in [0, 25], index will always be equal to value

    // check if pointer[index] is empty, then if empty inserting the newnode there
    if (pointer[index] == NULL)
    {
        newNode->string2[0] = 'a'+number;
        number++;
        newNode->string2[1] = '\0';
        pointer[index] = newNode;
        N++;
    }
    
    else // it means that the letter is already inserted
    {
        return; //there will be no collisons here as each letter is unique so it will have unique index
    }
   
}

char search(char string[]) // searches the given character and returns a character to which it is coded
{
    int value = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        value += string[i]; // computing ascii value
    }
     
    value -= 97; // computing index in alphabets
    int index = value % M;
    MAP temp = pointer[index];

    

    char c = temp->string2[0];  //returns that character to which it is coded
    return c;
}





int main()
{
    // init array of list to NULL
    initialize();

    char c, helper[2], d, ans[1000]; // ans array stores the answer(decoded message) helper string for storing a character in a string data type
    int k = 0;// size of ans array

    printf("Enter the key, press 'enter' to end line: "); //input of key
    scanf(" %c", &c);

    while(c != '\n') //takes input until user enters newline character(pressing enter key)
    {
         if(c != ' ')
         {
             helper[0] = c;    //for each character entered helper will be the string of it and this helper string will be inserted into hash table
             helper[1] = '\0';
             insert(helper);
         }
         scanf("%c", &c);
    }  
     
    printf("Enter the message press 'enter' to end line: "); //input of message to be decoded
    scanf("%c", &d);
    while(d != '\n')//takes input until user enters newline character(pressing enter key)
    {
         if(d != ' ')// for neglecting space (space is the same in message and decoded answer)
         {
             helper[0] = d;  //for each character entered helper will be the string of it and this helper string will be searched
             helper[1] = '\0';
             ans[k++] = search(helper);  //search function returns the character to which the input character is coded, that returned character is stored in ans array
         }
         else if(d == ' ')
         {
             ans[k++] = ' '; //if space is encountered this else will run 
         }
         scanf("%c", &d);
    }    
    
    printf("Decoded message: ");  // printing the decoded message
    for(int i = 0; i < k; i++)
    {
        printf("%c", ans[i]);
    }

    printf("\n");

    return 0;
}
