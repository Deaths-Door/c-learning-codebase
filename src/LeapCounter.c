/*
Pogrammer- Aarav Shah
Statement- Leap Year Counter
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	clrscr();
	int Minyear;
	int Maxyear;
	int Year;
	prinf("Enter a the Min Year\n")
	scanf("%d ,&Minyear")
	prinf("Enter a the Max Year\n")
	scanf("%d ,&Maxyear")
	for(Year = Minyear;Year <= Maxyear; Year++)
		if (year%4==0 && year%100 !=0 ||year%400==0){
}	prinf("Leaps years in this range are %d",&year)
}
	}
	getch();
	return 0;
}