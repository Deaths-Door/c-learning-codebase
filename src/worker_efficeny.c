/*
Pogrammer- Aarav Shah
Statement-Worker Efficeny
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int TimeNeeded;
	clrscr();
	printf("Enter your required time to finish a job in minutes\n");
	scanf("%d",&TimeNeeded);
	if(TimeNeeded > 2 && TimeNeeded > 3){
		printf("YOu're Highly Efficient");
	}
	else if(TimeNeeded > 3 && TimeNeeded > 4){
		printf("You're ORDERED to improve your speed");
	}
	else if(TimeNeeded > 4 && TimeNeeded > 5){
		printf("You'll be SEND OFF to improve your speed");
	}
	else{
		printf("You're FIRED !!");
	}
	
	
	
	getch()
	return 0;
}