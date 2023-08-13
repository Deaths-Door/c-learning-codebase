/*
Pogrammer- Aarav Shah
Statement-Triangle or not
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	double Ang1,Ang2,Ang3
	clrscr();
	printf("Enter the Angles");
	scanf("%lf",&Ang1);
	scanf("%lf",&Ang2);
	scanf("%lf",&Ang3);
	if (Ang1 + Ang2 + Ang3 =180){
		printf("Its a valid Triangle");
	}
	else{
		printf("Its not a valid Triangle");
	}
	getch();
	return 0;
}