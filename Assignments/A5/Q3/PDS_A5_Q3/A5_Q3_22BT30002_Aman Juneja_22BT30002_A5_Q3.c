/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 5
* Description : number guessing game
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

	int q;
	printf("Guessing Game! Press any key to continue!");
	scanf("%d",&q);
	printf("5 chances to guess a number between 1-100\n\n");
	srand(time(0)); //srand and time function used from time.h and stdlib.h library
	int r=rand()%100+1; //random number generated by program using rand function

	int i=0,num; //num variable declared
	while(i<5){
		printf("enter the number");
		scanf("%d",&num); //number inputted by user.
		
		//if block to check if number entered is right or not
		if(num==r){ 
			printf("Winner.\n");
			return 0;
		}

		//if-else block to give the user hint about entered number is big or small
		if(num>r){
			printf("Your guess is too big.\n");
		}
		else{
			printf("Your guess is too small.\n");
		}

		//losing condition.
		if(i==4){
			printf("Loser : The Number was %d\n",r);
		}

		i++;
	}
	
	
	return 0;
}