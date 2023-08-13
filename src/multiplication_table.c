/*
Pogrammer- Aarav Shah
Statement-Table Writer
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Table;
	int x;
	int Answer
	clrscr();
	printf("Enter the  Table of :");
	scanf("%d",&Table);
	for (x = 0 ; x <= 10; x++){
		Answer = Table * x + 1;
		printf(" %d * %d = %d \n",Table,x + 1,Answer);
	}
	getch();
	return 0;
}