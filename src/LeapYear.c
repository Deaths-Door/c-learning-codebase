/*
Pogrammer- Aarav Shah
Statement-Leap Year or Not
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main()
{
	int Year[];
	clrscr();
	printf("Enter a year\n");
	scanf("%d,Year");
	if (Year%100==0 || Year%4==0)
	{
		printf("It's a Leap Year")
	}
	else
	{
		prinft("It's a Normal Year")
	}
	getch();
	return 0;
}