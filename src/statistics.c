  /*
Pogrammer- Aarav Shah
Statement- Sum,Mean,Standard deviation of 5 Digits
Date - 8 August 2020
Version- 2.0 */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int Sum(int a,int b,int c,int d,int e){
	return a + b + c + d + e;
}

int Mean(int a,int b,int c,int d,int e, int Answer){
	return Answer / 5;
}

int StandardDeviation(int a,int b,int c,int,d,int e){
		int Mean;
		Mean = (a + b + c + d + e )/5;
		 a = pow(a - Mean,2);
		 b = pow(b - Mean,2);
		 c = pow(c - Mean,2);
		 d = pow(d - Mean,2);
		 e = pow(e - Mean,2);
		 Mean = (a + b + c + d + e) /5;
		 return pow(Mean,2);		 
		 
		 /*
			Mean = (a + b + c + d + e)/5;
		   for(x = 0; x <= 5;x++){	 
				EachNumAvg[x] = Mean - pow(Number[x],2);
				Squared = EachNumAvg[x] + Squared
		   }
		   Squared = Squared / 5;
		   return pow(Squared,2);
		 */
}

int main(){
	int num1,num2,num3,num4,num5;
	float Answer;
	int x;
	printf("Enter 5 numbers : ");
	scanf("%d\n",&num1);
	scanf("%d\n",&num2);
	scanf("%d\n",&num3);
	scanf("%d\n",&num4);
	scanf("%d"\n,&num5);
	Answer = Sum (int num1,int num2,int num3,int num4,int num5);
	printf("The sum of the numbers is : %f",Answer);
	
	Answer = Mean(Answer,int num1,int num2,int num3,int num4,int num5);
	printf("The mean of the numbers is :%f",Answer); 
	
	Answer = StandardDeviation(int num1,int num2,int num3,int num4,int num5,);
	printf("The Standard Deviation is :%f",Answer);
	return 0;
}