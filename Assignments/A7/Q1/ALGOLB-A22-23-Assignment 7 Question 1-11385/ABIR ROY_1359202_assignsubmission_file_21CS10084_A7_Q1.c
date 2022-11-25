/*Name - Abir Roy
Roll No - 21CS10084
Assignment -07 Q1
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
static int max = 200;

//Function to get equivalent integer of a lowercase letter
//we are considering 0 is equivalent to 'a', 1 to 'b' ,..., 25 to 'z'
int equiv_int(char c)
{
    int a = (int)(c - 'a');
    return a;
}

int main()
{
	//Initialization and taking input
    char key[max];
    char message[max];
    char decoded_message[max];
    printf("Enter the key\n");
    fgets(key, 999, stdin);
    printf("Enter the message\n");
    fgets(message, 999, stdin);

	 //Creating a hash table of size 26
    char HashTable[26];
    int i;
    //Filling the hash table with '.'
    for(i=0; i<26; i++)
    {
        HashTable[i] = '.';
    }
    int count = 0;
    //Traversing the whole key
    for(i=0; key[i] != '\0'; i++)
    {
        if(key[i] != ' ')
        {
        		//for the hashTable
        		//if i is integer equivalent of any character of the key, then hashTable[i] represnts the original of that character
            int int_key_i = equiv_int(key[i]);
            //this condition is used to avoid repetation
            if(HashTable[int_key_i] == '.')
            {
            	 //Whenever we get a new character in the key we fill HashTable[integer equivalent of that character] with the appropiate
            	 //letter. we get that appropiate letter by the help of variable count
                HashTable[int_key_i] = 'a' + count;
                count++;
            }
        }
    }
    //printing the output using hashTable
    for(i=0; message[i] != '\0'; i++)
    {
    	  //Getting the original value of a character of the message using hashTable
        if(message[i] != ' ')
        {
            int int_message_i = equiv_int(message[i]);
            decoded_message[i] = HashTable[int_message_i];
        }
        //for space
        else
        {
            decoded_message[i] = message[i];
        }
    }
    decoded_message[i] = '\0';
    printf("Decoded message : %s\n", decoded_message);
    return 0;
}
