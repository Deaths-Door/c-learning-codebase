/*
Pogrammer- Aarav Shah
Statement-Cube Root Calulator
Date - 27 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int number;
	int Answer;
	clrscr
	printf("Enter a number\n");
	scanf("%d",&number);
	Answer = number * number * number;\
	printf("%d",Answer);
	getch();
	return 0;
}