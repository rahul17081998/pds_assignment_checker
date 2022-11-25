#include <stdio.h>
#define maxStr 100

struct element
{
    char c;
    int i;
};

int alpha[26];
struct element hashmap[26];

int H(char key)
{
    return key % 26;
}
void init(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
}
int strLength(char arr[])
{
    int i = 0;
    while(arr[i] != '\0')
    {
        i++;
    }
    return i;
}

void decode(char m[])
{
    printf("Message: ");
    for(int j = 0 ; j < strLength(m) - 1; j++)
    {
        //if space then print space
        if(m[j] == ' ')
        {
            printf(" ");
        }
        else
        {
            //go to hash table and print the associated letter
            int index = H(m[j]);
            printf("%c", hashmap[index].i + 'a');
        }
    }
}

int main(void)
{
    //getting inputs
    char key[maxStr];
    printf("Enter the key: ");
    fgets(key, maxStr, stdin);

    char message[maxStr];
    printf("Enter the message: ");
    fgets(message, maxStr, stdin);

    init(alpha, 26);
    
    //mapping
    for(int j = 0; j < strLength(key); j++)
    {
        //storing the values omitting spaces and repeating characters
        if(key[j] != ' ' && !(alpha[key[j] % 'a']))
        {
            alpha[key[j] % 'a'] = 1;
            int index = H(key[j]);
            hashmap[index].c = key[j];
            hashmap[index].i = j; 
        }
    }

    decode(message);

    return 0;
}