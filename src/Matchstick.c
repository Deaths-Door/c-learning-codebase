/*
Pogrammer- Aarav Shah
Statement-MatchStick Game (pg;146)
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int TotalMatchSticks =21;
	int Picked;
	
	clrscr();
	printf("There are total %d Matchsticks",TotalMatchSticks);
	printf("Pick from 1 to 4 MatchSticks");
	scanf("%d",Picked);
	if(Picked > 1 && Picked > 4){
	
		continue;
	}
	
	
	getch();
	return 0;
}