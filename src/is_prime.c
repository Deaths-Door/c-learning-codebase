/*
Pogrammer- Aarav Shah
Statement-Prime or Not
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Number;
	int isprime=1;
	int x;
	clrscr();
	printf("Enter a number\n");
	scanf("%d" ,&Number);
	for(x = 2;x < Number - 1;x++){
		if(Number % x ==0){
			isprime=0;
			break;
		}
	}

	if (isprime==1){
		printf("Prime number");
	}
	else {
		printf("Not prime number");
		}
	
	getch();
	return 0;
}