/*
Pogrammer- Aarav Shah
Statement-Range Finder
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>	

int main(){
	int num1,num2;
	int Answer;
	clrscr();
	printf("Enter 2 Numbers :");
	scanf("%d",&num1);
	scanf("%d",&num2);
	Answer =abs(num1 - num2);
	printf("The answer is: %d",Answer);
	getch();
	return 0;
}