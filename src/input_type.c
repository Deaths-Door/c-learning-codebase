/*
Pogrammer- Aarav Shah
Statement-letter (Capital and lowercase),number,symbol
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	   char[1] = x;
	clrscr();
	printf("Enter a letter (Capital and lowercase),number,symbol\n");
	scanf("",&x);
	switch(x){
		case 'x > 65 &&  90 > x':
			printf("It's a Capital Letter from A-Z");
			break;
		case 'x > 97 && 122 > x':
			printf("It's a Lowercase Letter from a-z");
			break;
		case 'x > 48 && 57 > x':
			printf("Its a number from 0-9");
			break;
		case 'x > 0 &&  47 > x || x > 58 &&  64 > x || x > 91 &&  96 > x || x > 123 &&  127 > x':
			printf("It's a symbol");
			break;
	}
	getch();
	return 0;
}