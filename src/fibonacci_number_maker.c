/*
Pogrammer- Aarav Shah
Statement- Fibonacci Number Maker
Date - 8 August 2020
Version- 2.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int x;
	int Array[10];
	clrscr();
	printf("Fibonacci Element 1 = 1\n");
	printf("Fibonacci Element 2 = 1\n");
	Array[0]=0;
	Array[1]=1;
	for(x = 0;x < 8;x++){
	 	 Array[x+2]=Array[x] + Array[x+1];
		printf("Fibonacci Element %d = %d\n",x +3,Array[x +2]);
	}
	getch();
	return 0;
}
