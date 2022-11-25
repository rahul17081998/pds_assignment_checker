//21CS30040 
//Rajarshi Mondal
//A-7
//Q-1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#include<string.h>

#define TABLE_SIZE 26

typedef struct* entry_t{

const char* key;
const char* msg;
struct entry* next;
}ent;

typedef struct* ht_t{
ent** entries;
}ht;

int* hash(char stn){
char val='a';
char key= stn;

int length=strlen(key);

int i=0;
for(;i<length;++i){
val=val*37+key[i];
}

val/=TABLE_SIZE;
return val;
}


ht* hTC(n){

ht* hashtable=(ent*)malloc(sizeof(ent)*1);

hashtable->entries=(ent*)malloc(sizeof(ent)*n);

int i=0;
for(;i<TABLE_SIZE;++i){
entries[i]=NULL;
}

return hashtable;

}

ht* set_hash(int* val;char* msg){

int no=hash(msg);
if(entries[no]==NULL){
entries[no]=pair(val,msg);
}
}


int main(){
ent** arr=(ent*)malloc(sizeof(ent)*26);
hTC(26);
char msg[20];
int i=0;
fgets(msg)
char st='a';
for(;i<26;i++){
arr[i]->key=msg[i];
arr[i]->next=st;
st++;
}


char key[100];
fgets(key);
i=0;
for(;i<strlen(key);i++){
set_hash(i,msg);
}
i=0;
for(;i<26;i++){
printf("%c",arr->next);
}
return 0;


}
