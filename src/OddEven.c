/*
Pogrammer- Aarav Shah
Statement-Odd or Even Number
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Number;
	clrscr();
	printf("Enter a Number\n");
	scanf("%d",&Number);
	if (Number %2 == 0){
		printf("Its a Even Number");
	}
	else{
		printf("Its a Odd Number");
	}
	getch();
	return 0;
}