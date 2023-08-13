  /*
Pogrammer- Aarav Shah
Statement- Products using function
Date - 8 August 2020
Version- 2.0 */

#include <stdio.h>
#include <conio.h>

int Multipler(int x,int y){
		return x * y;
}

int main(){
	float num1;
	int num2;
	float Answer;
	printf("Enter 2 numbers:");
	scanf("%f\n",&num1);
	scanf("%d",&num2);
	Answer = Multipler(num1,num2);
	printf("The product of the 2 numbers is %f",Answer);
	return 0;
}