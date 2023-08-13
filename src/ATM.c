/*
Pogrammer- Aarav Shah
Statement-ATM (1000,500,100)
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>	

int main(){
	
	int Withdraw;
	int AtmMoney = 1000000;
	int AcBalance=1600;
	int Thousands;
	int FiveHundreds;
	int Hundreds;
	int Remaining;
	clrscr();
	printf("Enter an amount in the multiple of 100\n");
	scanf("%d,&Withdraw");
	while(Withdraw %100 == 0 ){
		 printf("Invalid amount\n");
		 scanf("%d,&Withdraw");
	}
	if (Withdraw < AtmMoney){
		Thousands=Withdraw / 1000;
		Remaining=Withdraw % 1000;

		FiveHundreds=Remaining / 500;
		Remaining=Remaining % 500;
		
		Hundreds=Remaining / 100;
		Remaining=Remaining % 100;
		
		printf("Total Thousand:%d\n",Thousands);
		printf("Total Five Hundreds;%d\n",FiveHundreds);
		printf("Total Hundreds:%d\n,"Hundreds);
		
		AtmMoney=AtmMoney-Withdraw;
		AcBalance=AcBalance-Withdraw;
	}
	else {
		 printf("Sorry,Insufficient money in ATM\n");
	}	
	getch();
	return 0;
}
