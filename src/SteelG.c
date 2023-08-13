/*
Pogrammer- Aarav Shah
Statement-Grade of Steel
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Hardness;
	int CarbonContent;
	int TensileStrength;
	
	clrscr();
	
	printf("Enter Hardness:");
	scanf("%d",&Hardness);
	printf("\nEnter Carbon Content:");
	scanf("%lf",&CarbonContent);
	printf("\nEnter Tensile Strength:");
	scanf("%d",&TensileStrength);
	
	if(Hardness > 50 && CarbonContent < 0.7 && TensileStrength > 5600){
		printf("Steel Grade is :10\n");
	}
	else if(Hardness && CarbonContent && TensileStrength){
		printf("Steel Grade is :9\n");
	}
	else if(Hardness && CarbonContent && TensileStrength){
		printf("Steel Grade is :8\n");
	}
	else if(Hardness && CarbonContent && TensileStrength){
		printf("Steel Grade is :7\n");
	}
	else if(Hardness && CarbonContent && TensileStrength){
		printf("Steel Grade is :6\n");
	}
	else{
		printf("Steel Grade is :5\n");
	}
	
	getch();
	return 0;
}