/* Name: Mayukh Raychaudhuri
Roll no.: 19MT10024
Dept: Department of Metallurgy and Materials Engineering
Machine no.: 95 */

#include <stdio.h>
#include <string.h>

int main() {
	int n, m, i, tmp, cur;
	char key[100], message[1000], decoded[26];
	
	printf("key = ");
	scanf("%[^\n]%*c", key);
    n = strlen(key);
	printf("message = ");
	scanf("%[^\n]%*c", message);
    m = strlen(message);
    
	for(i = 0; i < 26; i++)
		decoded[i] = '_';
	cur = 0;
	for(i = 0; i < n; i++) {
		tmp = key[i]-'a';
		if (tmp != -65 && decoded[tmp] == '_') decoded[tmp] = 'a' + cur++;
	}
	
	// decoding
	for(i = 0; i < m; i++) {
		tmp = message[i]-'a';
		if (tmp != -65) message[i] = decoded[tmp];
	}
	printf("Decoded message: %s\n", message);
	return 0;
}

// in: "eljuxhpwnyrdgtqkviszcfmabo"
// in: "zwx hnfx lqantp mnoeius ycgk vcnjrdb"
// out: "the five boxing wizards jump quickly"
