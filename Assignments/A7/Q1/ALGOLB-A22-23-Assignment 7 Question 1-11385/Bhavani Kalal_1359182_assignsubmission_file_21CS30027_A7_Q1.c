#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int data;
	int full;
}node;

typedef struct{
	int capacity;
	int size;
	node *t;
}hash;

hash *createHash(int n);
hash *insert(hash *h, int key);
void print(int *a, int k, hash *h);

int main(){
	int n, m, i, j, k, flag;
	printf("Enter the number of teams played: ");
	scanf("%d", &n);
	hash *h;
	h = (hash *)malloc(sizeof(hash));
	h = createHash(n);
	printf("Enter the number of matches played: ");
	scanf("%d", &m);
	int *w, **a;
	w = (int *)malloc(m*sizeof(int));
	a = (int **)malloc(m*sizeof(int*));
	for(i=0; i<m; i++) a[i] = (int *)malloc(2*sizeof(int));
	printf("Enter the results of the matches:\n");
	for(i=0; i<m; i++){
		for(j=0; j<2; j++)scanf("%d", &a[i][j]);
	}
	k = 1;
	for(i=0; i<m; i++){
		if(i==0)w[i] = a[i][0];
		else{
			flag = 0;
			for(j=0; j<k; j++){
				if(a[i][0] == w[j]){
					flag = 1;
					break;
				}
			}
			if(flag == 0){
				w[k] = a[i][0];
				k++;
			}
		}	
	}
	for(i=0; i<m; i++)h = insert(h, a[i][1]);
	print(w, k, h);
	return 0;
}

hash *createHash(int n){
	hash *temp;
	temp = (hash *)malloc(sizeof(hash));
	temp->capacity = n;
	temp->size = 0;
	temp->t = (node *)malloc(n*sizeof(node));
	for(int i=0; i<n; i++){
		temp->t[i].data = 0;
		temp->t[i].full = 0;
	}
	return temp;
}

hash *insert(hash *h, int key){
	int indx;
	indx = key - 1;
	if(h->t[indx].full == 0){
		h->t[indx].data = 1;
		h->t[indx].full = 1;
		h->size++;
		return h;
	}
	h->t[indx].data++;
	return h;
}

void print(int *a, int k, hash *h){
	printf("Teams that have never lost in the tounament:\n   ");
	int i;
	for(i=0; i<k; i++)if(h->t[a[i]-1].full == 0)printf("%d, ", a[i]);
	printf("\nTeams that have lost eactly one match:\n   ");
	for(i=0; i<h->capacity; i++){
		if(h->t[i].full != 0){
			if(h->t[i].data == 1)printf("%d, ", i+1);
		}
	}
	printf("\n");
	return;
}
