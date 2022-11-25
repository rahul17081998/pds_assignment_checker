#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Using integer hashtable(integers are corresponding alphabets, eg. 0->a, 1->b, 2->c and so on)
int hash[3][26];//Hashtable(initialised to 0 in all cells) to store the mappings(row 1 is the character from cipher key, row 2 is its corresponding alphabet, row 3 ensures there are no duplicate keys)

int res[26];//Table to store corresponding characters of cipher key characters

//Function to fill the hashtable
void fillTable(char key[]){
    int i,cn = 0;//cn will be used to index the hashtable
    for(i = 0;i<strlen(key);i++){
        if(key[i] == ' ')//ignoring spaces
            continue;
	   if(cn == 26)//stopping when table is filled
		  break;
        int p = (int)key[i] - 'a';
        if(hash[2][p] == 0){ //Checking if key already exists or not
            //Filling the corresponding entries if key not present
            hash[0][cn] = p;
 	 	  hash[1][cn] = cn;
		  hash[2][p] = -1;//Marking key as existing to ensure no duplicate values
		  res[p] = cn;//storing the corresponding character in res array
		  cn++;
	   }
    }
    return;
}

int main()
{
    int i;
    char key[1000],m[1000];
    printf("key = ");
    scanf("%[^\n]%*c", key);
    printf("message = ");
    scanf("%[^\n]%*c", m);
    fillTable(key);
    printf("Decoded message: ");
    for(i = 0;i<strlen(m);i++){
        if(m[i] == ' '){
	       printf(" ");
		  continue;
 	   }
	   int p = (int)m[i] - 'a';
        int q = res[p];
        printf("%c",'a'+q);
    }
    return 0;
}

