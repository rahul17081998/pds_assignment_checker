/*
Smarak Kanjilal
21CS30061
Assignment 7,Q1
*/
#include <stdio.h>

#include <string.h>

int main() {
    char key[10000];
    printf("Enter the key:\n");
    scanf("%[^\n]%*c", key);

    char message[10000];

    scanf("%[^\n]%*c", message);
    printf("Enter the message:\n");

    int hash[26];
    int i;
    for (i = 0; i < 26; i++)
        hash[i] = -1;//default value

    int ctr = 0;
    for (i = 0; i < strlen(key); i++) {
        if (key[i] <= 122 && key[i] >= 97)
            if (hash[key[i] - 97] == -1) {
                hash[key[i] - 97] = ctr;//storing the (ascii value-97)
                ctr++;

            }
    }
    printf("Decoded Message: ");
    for (i = 0; i < strlen(message); i++) {
        if (message[i] == ' ') printf(" ");
        else printf("%c", (char)(hash[message[i] - 97] + 97));
    }

    return 0;
}
