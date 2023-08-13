/*
Pogrammer- Aarav Shah
Statement-Variable Swaper
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>
 
 int main(){
	 int Var1;
	 int Var2;
	 int Temp;
	 clrscr();
	 printf("Enter 2 numbers");
	 scanf("%d",&Var1);
	 scanf("%d",&Var2);
	 Temp = Var2;
	 Var2 = Var1;
	 Var1 = Temp;
	 printf("Number 1 %d",Var1);
	 printf("Number 2 %d ",Var2);
	 
 
	 getch();
	 return 0;
 }