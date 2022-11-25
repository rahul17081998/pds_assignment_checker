#include<stdio.h>
#include<stdlib.h>

char *demsg(char keyarray[],char msg[],int msglength){		//this function will decode the message using keyarray
	char *decodemsg=(char*)malloc(msglength*sizeof(char));
	int i=0;
	for(;i<msglength;i++){
		if(msg[i]=='\0'){
			decodemsg[i]='\0';		
		}
		if((msg[i]-'a'<26)&&(msg[i]-'a')>=0){decodemsg[i]=keyarray[msg[i]-'a'];}
		else{decodemsg[i]=msg[i];}
	}
	return decodemsg;
}

int main()
{
	char key[50];						//will store input of key
	char keyarray[26];					//will store respective letter to be converted
	char msg[100];
	char *decodemsg;					//will store the address of decoded message
	int msglength;
	int i=0;
	int x;
	printf("Enter the key : ");
	while(1){
		scanf("%c",&key[i]);
		if(key[i]=='\n'){
			key[i]=='\0';
			break;
		}
		else{
			keyarray[key[i]-'a']='a'+i;		//taking input with making an key array
		}
		i++;
	}
	printf("Enter the message : ");
	i=0;
	while(1){
		scanf("%c",&msg[i]);				//taking an message as input
		if(msg[i]=='\n'){
			msg[i]=='\0';
			i++;
			break;
		}
		i++;
	}
	msglength=i;

	decodemsg=demsg(keyarray,msg,msglength);		
	printf("Decoded msg is : ");				//printing decoded message
	for(i=0;i<msglength;i++){
		printf("%c",decodemsg[i]);	
	}
	printf("\n");
	return 0;
}
