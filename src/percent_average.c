 /*
Pogrammer- Aarav Shah
Statement- % and mean of marks
Date - 8 August 2020
Version- 2.0 */

#include <stdio.h>
#include <conio.h>

int Mean(int x,int y){
	for(x = 0;x <= 3;x++){
		Answer = Mean[x] + Answer;
	}
	return Answer;
}

int Percentage(){
	
}

int main(){
	int Marks [3];
	float Answer;
	int x;
	printf("Enter the marks received :");
    for(x = 0; x <= 3;x++){
		scanf("%d",&Marks[x]);
	}	
	 Mean(x,Marks);
	printf("The mean is %f",Answer);
	return 0;	
}