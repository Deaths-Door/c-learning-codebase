/*
Pogrammer- Aarav Shah
Statement- Printing 0-256
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	clrscr();
	int sum 0;
	int n;
	int x;
	
	printf("Enter a Number\n")
	scanf("%d, &n")
	for (x = 1;x < n; x++)
		if (n%x==0){
			sum=sum +1
		}
	if(n==sum){
		printf("Perfect Number\n")
	}
	else {
		printf("Not a Perfect Number\n")
	}
	getch();
	return 0;
}