/*
Pogrammer- Aarav Shah
Statement-Km -> Cm,m,inches,feet
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>	

int main(){
	int Km;
	int cm ,m,inches,feet
	clrscr();
	printf("Enter the number\n");
	scanf("%d",&Km);
	
	m = Km * 1000;
	cm = m * 100;
	inches = cm /2.54;
	feet = inches /12;
	
	printf("Distances in Metres:%d",m);
	printf("Distances in Cm:%d",cm);
	printf("Distances in Inches:%d",inches);
	printf("Distances in Feet:%d",feet);
	
	getch();
	return 0;