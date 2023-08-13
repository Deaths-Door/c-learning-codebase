/*
Pogrammer- Aarav Shah
Statement- >=<100 Yes or No
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int number;
	clrscr();
	printf("Enter a Number");
	scanf("%d",&number);
	if (number == 100){
	printf("Your Number is equal to 100");
	}
	else if (number > 100){
	printf("Your Number is greater than 100");
	}
	else{
	printf("Your Number is smaller than 100");
	}
	getch();
	return 0;
}
