#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char n;
printf("Enter key:\n");
scanf("%c",&n);
printf("Enter given message:\n");
scanf("%c",&n);
for (int i = 0; i <= 26; i++){
const char capacity = 26;
int size = 0;
struct HashNode** arr;
struct HashNode {
	char key;
	char message;
};
void insert(char key, char message)
{
struct HashNode* temp
		= (struct HashNode*)malloc(sizeof(struct HashNode));
	temp->key = key;
	temp->message = message;
int hashIndex = key % capacity;
	while (arr[hashIndex] != NULL
		&& arr[hashIndex]->key != key
		&& arr[hashIndex]->key != -1) {
		hashIndex++;
		hashIndex %= capacity;
	}
int find(int key){
	int hashIndex = (key % capacity);

	int counter = 0;

	while (arr[hashIndex] != NULL) {

		int counter = 0;

		if (counter++ > capacity)
			break;

		if (arr[hashIndex]->key == key)
			return arr[hashIndex]->message;

		hashIndex++;
		hashIndex %= capacity;
	}
	return -1;
printf("Enter final decoded message:\n");
scanf("%c",&n);
	return 0;
}
	
	

