#include <stdio.h>
#include <string.h>
#define MAX 50
//instead of having alphabet be in order and jumbling the key around
//store alphabets as they come in order, in aray, where index represented by letter of key

void main(){
	int fill=0;
	int alpha[26];
	for(int i=0;i<26;i++){alpha[i]=-1;}
	char key[MAX];
	char message[MAX];
	char out[MAX];
	printf("reading key  ");
	gets(key);
	printf("reading message:  \n");
	gets(message);
	printf("done reading");
	int klen=strlen(key);
	int mlen=strlen(message);
	for(int i=0;i<klen;i++)
	{
		int find=(int)(key[i]-'a');
		if(alpha[find]==-1){
			alpha[find]=(char)(97+fill);
			fill++;
		}
		if (fill==26)break;
	}
	for (int i=0;i<26;i++)
	for(int i=0;i<mlen;i++)
	{
		if (((int)message[i])-97>25 || ((int)message[i])-97<0)out[i]=message[i];
		else{out[i]=alpha[((int)message[i])-97];}
	}
	printf("%s",out);

}
