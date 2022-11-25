#include <stdio.h>

int main() {
	int i;
    char keys[1000];
    char encryptedText[1000];

	printf("Enter key: ");
    fgets(keys, 1000, stdin);
	// We are assuming key contains all 26 characters, as sir mentioned


	printf("Enter message: ");	
	//procuring the encrypted text/message
    fgets(encryptedText, 1000, stdin);

	//hash table
    char hashTable[27];
    for(i=0;i<27;i++) {
	//only 26 alphabets, array break
        if(i==26) {
            hashTable[i] = '\0';
        }
        else {
            hashTable[i] = '0';
        }
    }

    char c = 'a';
    for(i=0;i<1000;i++) {
        if(keys[i]=='\0') {
            break;
        }
        else {
            int p = keys[i] - 'a';
            if(hashTable[p]=='0') {
                hashTable[p] = c;
                c++;
				//defining hash table value
            }
        }
    }

    char message[1000]; //final decrypted message

	//decoding the encrypted text/message
    for(i=0;i<1000;i++) {
        if(encryptedText[i]=='\0') {
            message[i] = '\0';
			//breaking when message ends
            break;
        }
        else {
            if(encryptedText[i]==' ') {
                message[i] = ' ';
			//keeping the spaces same
            }
            else {
                message[i] = hashTable[encryptedText[i]-'a'];
				//decoding
            }
        }
    }
	
	//printing decoded message
    printf("Decoded message: %s", message);
	printf("\n");

    return 0;
}
