/*
Pogrammer- Aarav Shah
Statement-Area > Perimter
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Length,Breath;
	int Area,Perimter;
	clrscr();
	printf("Enter the Length and Breath of a rectangle");
	scanf("%d",&Length);
	scanf("%d",&Breath);
	Area=Length * Breath;
	Perimter= Length * 2 + Breath * 2;
	if (Area < Perimter){
		printf("Area is smaller than Perimeter\n");
	}
	else{
		printf("Perimter is smaller than Area\n");
		
	}
	getch();
	return 0;