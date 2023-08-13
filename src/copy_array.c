/*
Pogrammer- Aarav Shah
Statement-Array Copyer
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Array1[20];
	int Array2[20];
	int Number;
	int x;
	printf("Enter number of elements\n");
	printf("Enter the Values\n");
	for (x = 0;x < Number; x++){
		scanf("%d ,&Number");
	}
	Array2 = Array1;
	printf("Copied Array\n");
	for (x = 0; x < Number;x ++){
		printf("\n$d, Array2");
	}
	getch();
	return 0;
}
