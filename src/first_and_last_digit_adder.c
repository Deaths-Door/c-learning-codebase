/*
Pogrammer- Aarav Shah
Statement-1st and Last Digit Adder
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int number;
	int a,b;
	int sum;
	clrscr();
	printf("Enter a four digit number");
	scanf("%d",&number);
	a=number %10;
	b=number /1000;
	sum = a+b;
	printf("Enter sum is %d",sum);
	getch();
	return 0;
}
