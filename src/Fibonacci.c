/*
Pogrammer- Aarav Shah
Statement- Fibonacci Number Maker
Date - 8 August 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Array[10];
	int x;
	clrscr();
	Array[0] = 0;
	Array[1] = 1;	
	Array[2] =Array[0] + Array[1];
	Array[3] =Array[1] + Array[2];
	Array[4] =Array[2] + Array[3];
	Array[5] =Array[3] + Array[4];
	Array[6] =Array[4] + Array[5];
	Array[7] =Array[5] + Array[6];
	Array[8] =Array[6] + Array[7];
	Array[9] =Array[7] + Array[8];	
	for(x = 0;x < 10;x++){
		printf("Fibonacci Element %d = %d\n",x +1,Array[x]);	
	}
	getch();
	return 0;
}	