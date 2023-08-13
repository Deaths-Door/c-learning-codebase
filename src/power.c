/*
Pogrammer- Aarav Shah
Statement-Power Solver
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>


int main(){
	int Number;
	int Power;
	int Answer;
	clrscr();
	scanf("%d",&Number);
	scanf("%d",&Power);
	Answer = pow(double Number,double Power);
	printf("The Answer : %d",Answer);
	getch();
	return 0;
} 