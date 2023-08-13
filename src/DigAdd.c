/*
Pogrammer- Aarav Shah
Statement-Digit Adder
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Number;
	int a,b,c,d,e;
	int Sum;
	clrscr();
	
	printf("Enter a number(5 digit)\n");
	scanf("%d",&Number);
	
	a=Number%1;
	b=Number%10;
	c=Number%100;
	d=Number%1000;
	e=Number / 10000;
	Sum = a + b + c + d + e; 
	
	printf("The sum of its digits is %d",Sum);
	
	getch();
	return 0;
}