/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:10
Discription :
*/
#include<stdio.h>
#include<stdlib.h>

typedef struct list{
		
	int d;
	struct list* next;

}Element;
Element* reading(int n)
{
	Element *head=NULL,*tail,*tmp;
	if(n==0)
		printf("\n");
	else{
		head=(Element*)malloc(sizeof(Element));
		int x;
		scanf("%d",&x);
		(head->d)=x;
		tail=head;
		for(int i=1;i<n;i++)
		{
			tmp=(Element*)malloc(sizeof(Element));
			scanf("%d",&x);
			(tmp->d)=x;
			tmp->next=0;
			tail->next=tmp;

			tail=tail->next;
		}
	tail->next=NULL;
	}

	return head;
}
int find(Element* head,int n)
{
	int j;
	if((head->d)<(head->next->d))
	{
		for(j=0;j<n-1;j++)
		{
			if((head->d)<(head->next->d))
				head=head->next;
			else
			{
				return 0;
			}
		}
		return 1;
	}
	else if((head->d)>(head->next->d))
	{
		for(j=0;j<n-1;j++)
		{
			if((head->d)>(head->next->d))
			{
				head=head->next;	
			}
			else
			{
				return 0;;
			}
		}
		return -1;
	}
	
}
int main()
{
	int n;
	printf("Enter the number of elements in list :");
	scanf("%d",&n);
	Element* p;
	p=reading(n);
	if(find(p,n)==1)
		printf("List is in ascending order");
	else
	{
		if(find(p,n)==-1)
			printf("List is in descending order");
		else
			printf("List is not sorted");
	}
	return 0;
}
	



