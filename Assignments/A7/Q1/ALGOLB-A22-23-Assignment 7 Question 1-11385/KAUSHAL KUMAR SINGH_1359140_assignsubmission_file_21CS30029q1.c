#include <stdio.h>

int check(char arr[], char c)
{
    // We need to check if c is present in the array
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == c)
        {
            return 1;
        }
    }
    return 0;
}

int search(char arr[], char c)
{
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == c)
        {
            return i;
        }
    }
}

int main()
{
    char arr[26] = {'.'};
    char c;
    printf("Enter the key: ");
    scanf("%c", &c);
    int i = 0;
    while (c != '\n')
    {
        if (c == ' ')
        {
            scanf("%c", &c);
            continue;
        }
        if (!check(arr, c))
        {
            arr[i] = c;
            i++;
        }
        scanf("%c", &c);
    }
    printf("Enter the message : ");
    char m;
    scanf("%c", &m);
    int j = 0;
    printf("Decoded message is : ");
    while (m != '\n')
    {
        if (m == ' ')
        {
            printf(" ");
            scanf("%c", &m);

            continue;
        }
        int idx = search(arr, m);
        printf("%c", idx + 'a');
        scanf("%c", &m);
    }

    return 0;
}