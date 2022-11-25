// NAME: SOMYA KUMAR
// ROLL: 21CS30050
// MACHINE NO.: 25

#include<stdio.h>
#include<string.h>

// This structure is used contain the mapping betyween key and value 
struct hash_table{
	char key;
	char value;
};

int main(){

	char s1[100], s2[100];
	printf("Enter the key: ");
	scanf("%[^\n]s",s1);
	getchar();
	printf("Enter the message: ");
	scanf("%[^\n]s",s2);
	// A hash table is defined to store the mapping of every alphabet (key) to some another alphabet
	struct hash_table table[27];
	
	int i=0;
	// In this hash table, we have initialized the value to be alphabet in sequential order
	// We will then find key for each alphabet, which will be our hash function
	for(;i<27; i++){
		table[i].value='a'+i;
	}
	int j=0;
	i=0;
	int flag, k;
	// This loop stores the key values in the order given in key
	// Those alphabets are then sequentially mapped to the alphabets a,b,c,d,... 
	while(s1[i]!='\0'){
		flag=0;
		k=0;
		for(;k<j; k++){
			if(s1[i]==table[k].key){
				flag++;
			}
		}
		if(flag==0&&s1[i]!=' '){
			table[j].key=s1[i];
			j++;
		}
		i++;
	}

	i=0;
	printf("\n");
	i=0;
	printf("Decoded message: ");
	// This loop prints the final ans
	// whenever a valid key is encountered, it finds that key in the hash table 
	// It then prints the value associated with that key in the table
	while(s2[i]!='\0'){
		if(s2[i]==' '){
			printf("%c",s2[i]);
		}
		else{
			j=0;
			for(;j<27; j++){
				if(s2[i]==table[j].key){
					printf("%c",table[j].value);
					break;
				}
			}
		}
		
		i++;
	}
	printf("\n");
	return 0;
}
