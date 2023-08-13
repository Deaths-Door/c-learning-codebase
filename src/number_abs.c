/*
Pogrammer- Aarav Shah
Statement-Abs of number
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Number;
	int Answer
	clrscr();
	printf("Enter a number\n");
	scanf("%d",&Number);
	if(Number > 0){
		Answer = Number - Number * 2;
		printf("Answer :%d",Answer);
	}
	else{
		Answer = abs(int Number);
		printf("Answer :%d",Answer);
	}
	getch();
	return 0;
}