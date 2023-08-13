/*
Pogrammer- Aarav Shah
Statement-ATM(100,50,10)
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>	

int main(){
	
	int Withdraw;
	int AtmMoney = 1000000;
	int AcBalance=1600;
	int Ten;
	int Fifty ;
	int Ten;
	int Remaining;
	clrscr();
	printf("Enter an amount in the multiple of 100\n");
	scanf("%d,&Withdraw");
	while(Withdraw %100 == 0 ){
		 printf("Invalid amount\n");
		 scanf("%d,&Withdraw");
	}
	if (Withdraw < AtmMoney){
		Ten=Withdraw / 100;
		Remaining=Withdraw % 100;

		Fifty =Remaining / 50;
		Remaining=Remaining % 50;
		
		Ten=Remaining / 10;
		Remaining=Remaining % 10;
		
		printf("Total Thousand:%d\n",Ten);
		printf("Total Five Ten;%d\n",Fifty );
		printf("Total Ten:%d\n,"Ten);
		
		AtmMoney=AtmMoney-Withdraw;
		AcBalance=AcBalance-Withdraw;
	}
	else {
		 printf("Sorry,Insufficient money in ATM\n");
	}	
	getch();
	return 0;
}
