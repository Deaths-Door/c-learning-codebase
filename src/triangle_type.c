/*
Pogrammer- Aarav Shah
Statement-Triangle Type
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	double Ang1,Ang2,Ang3;
	clrscr();
	printf("Enter the Angles\n");
	scanf("%lf",&Ang1);
	scanf("%lf",&Ang2);
	scanf("%lf",&Ang3);
	if(Ang1 && Ang2 && Ang3 ==60){
		printf("It's a Equalaterial Triangle\n");
	}
	else if(Ang1 != Ang2 != Ang3){
		printf("It's a Scalene Triangle\n");
	}
	else if(Ang1 == Ang2 && Ang3 != Ang1 && Ang2 || Ang2 == Ang3 && Ang1 != Ang2 && Ang3 || Ang1 == Ang3 && Ang2 != Ang1 && Ang3){
		printf("It's a Isosceles Triangle\n");
	}
	else{
		printf("It's a Right Angle Triangle\n");
	}
	
	
	getch();
	return 0;
}