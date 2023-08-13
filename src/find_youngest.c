/*
Pogrammer- Aarav Shah
Statement-Youngest Finder
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Ram,Ajay,Shyam;
	clrscr();
	printf("Enter Age of Ram\n\n");
	scanf("%d",&Ram);
	printf("Enter Age of Ajay\n");
	scanf("%d",&Ajay);
	printf("Enter Age of Shyam\n");
    scanf("%d",&Shyam);
	if(Ram < Ajay && Shyam){
		printf("Ram is the Youngest");
	}
	else if(Ajay < Shyam && Ram){
		printf("Ajay is the Youngest");
	}
	else{
		printf("Shyam is the Youngest");
	}
	getch();
	return 0;
}
