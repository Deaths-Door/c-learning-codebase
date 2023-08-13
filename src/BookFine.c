/*
Pogrammer- Aarav Shah
Statement-Libary book fine
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int DaysLate;
	
	clrscr();
	
	printf("Enter the amount of days late:")
	scanf("%d\n",&DaysLate);
	
	if(DaysLate >= 5){
		printf("The fine :50 p ");
	}
	else if(DaysLate > 6 && DaysLate >10){
		printf("The fine :Rs 5 p");
	}
	else{
		printf("Your Membership is cancelled");
	}
	getch();
	return 0;
}