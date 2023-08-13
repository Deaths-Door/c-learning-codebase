/*
Pogrammer- Aarav Shah
Statement-Area and Perimeter of Retangle and Circle
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	int Radius;
	int Length;
	int Breath;
	int AreaRec,PeriRec;
	int AreaCir,CircumCir;
	clrscr();
	printf("Enter the Radius of the circle\n");
	scanf("%d",&Radius);
	printf("Enter the Length and breath of the retangle\n");
	scanf("%d",&Length);
	scanf("%d",&Breath);
	
	AreaRec=Length * Breath;
	PeriRec=Length * 2 + Breath * 2;
	CircumCir= M_PI * Radius * 2
	AreaCir= double pow( 3.14* Radius ,2);
	
	printf("Area of the circle is %d\n",AreaCir);
	printf("Circumfence of the circle is %d\n",CircumCir);
	printf("Area of the Rectangle is %d\n",AreaRec);
	printf("Perimeter of the Retangle is %d\n",PeriRec);
	getch();
	return 0;
}