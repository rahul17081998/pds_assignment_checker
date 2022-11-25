/********
Name: Tanwir Singh
Roll No.: 19MT10041
Machine No.: 81
*******/

#include <stdio.h>
#define max 999

//FUNCTION TO CALCULATE LENGTH OF A STRING
int str_length(char str[]) {
    int cnt; 
    for (cnt = 0; str[cnt] != '\0'; ++cnt);
    return cnt; 
}


int main() {   
    
    /*int n,m;
    printf("Enter n:");
	scanf("%d", &n);
    printf("Enter m:");
    scanf("%d", &m);*/
    char text[max];
    char message[max];
    printf("Enter the first string: ");  
	fgets(text, 999, stdin);
    printf("Enter the second string: ");  
	fgets(message, 999, stdin);
    char vis[26]; // hashmap to store the corresponding value of each letter as given in the question
    for(int i=0;i<26;i++){
		vis[i] = '#';
    }
    int cnt = 0;
	int n = str_length(text);
	int m = str_length(message);
    for(int i=0;i<n;i++){
        //printf("%c", text[i]);
        if(text[i] == ' ') continue;
        //used ascii values for type conversion(int to char and vica versa)
        if(vis[(int)text[i] - 97] != '#') continue;
        vis[(int)text[i] - 97] = (char)(cnt+97);
        cnt++;
        
    }
    /*for(int i=0;i<26;i++){
        printf("%c ", vis[i]);
    }*/
	char ans[m];
    printf("Decoded message: ");
    for(int i=0;i<m;i++){
        if(message[i] == ' ') printf(" ");
        else{
			printf("%c", vis[(int)message[i] - 97]);
        }
    }
   
    return 0;
}
