/*
Pogrammer- Aarav Shah
Statement-Profit or Lost
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	double Cost,Sell;
	double Byhowmuch;
	clrscr();
	printf("Enter Cost and Selling Price\n");
	scanf("%lf",&Cost);
	scanf("lf",&Sell);
	if(Sell > Cost ){
		Byhowmuch = Sell - Cost;
		printf("Profit by %lf",Byhowmuch);
	}
	else{
		Byhowmuch = abs(Cost - Sell);
 		printf("Lose by %lf",Byhowmuch);
	}
	
	
	getch();
	return 0;
}