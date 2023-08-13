/*
Pogrammer- Aarav Shah
Statement-Insurance Yes or Not
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Age;
	char[1] Gender;
	char[1] Lives;
	char[1]	Health
	clrscr();
	
	printf("Enter Age\n");
	scanf("%d",&Age);
	printf("Enter Gender(M/F)\n");
	scanf("%c",&Gender);
	printf("Enter Where you live (C-City/V-Village)\n");
	scanf("%c",&Lives);
	printf("Enter your health (E-Excellent/P-Poor)\n");
	scanf("%c",&Health);
	
     if(Gender == M && Lives == C && Health == E && Age > 25 && Age > 35){
		 printf("You can be insured\n");
		 printf("Your Premium Rate is Rs 4 per Thousand\n");
		 printf("Insurance cannot exceed :Rs 200 000");		 
	 }
	 else if( Gender == F && Lives == C && Health == E && Age > 25 && Age > 35){
		 printf("You can be insured\n");
		 printf("Your Premium Rate is Rs 3 per Thousand\n");
		 printf("Insurance cannot exceed : Rs 100 000");
	 }
	 else if( Gender == M && Lives ==  && Health == P && Age > 25 && Age > 35){
		 printf("You can be insured\n");
		 printf("Your Premium Rate is Rs 6 per Thousand\n");
		 printf("Insurance cannot exceed : Rs 10000");
	 }
	 else{
		 printf("You can not be insured\n");
	 }	
	getch();
	return 0;
}