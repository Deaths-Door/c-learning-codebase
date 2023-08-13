/*
Pogrammer- Aarav Shah
Statement-
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	clrscr;
	int x;
	int Array;
	int Number;
	printf("Enter number of elements\n");
		scanf("%d" ,%Number);
	printf("Enter the elements\n");
	for(x = 0;x < Number;x ++){
		scanf("%d" ,&Array);
	}
	getch();
	return 0;
}