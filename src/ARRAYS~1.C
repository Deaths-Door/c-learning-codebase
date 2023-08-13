/*
Pogrammer- Aarav Shah
Statement-Array Sorter
Date - 26 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

 int main(){
	 int NrofElements;
	 int x,y;
	 int Temp;
	 int arr1[100];
	 clrscr();
	 printf("Enter the number of elements");
	 scanf("%d",&NrofElements);
	 for(x = 0;x < NrofElements;x++){
		 printf("\nEnter Number %d:" ,x+1);
		 scanf("%d",&arr1[x]);
	 }
	 for(x =0;x < NrofElements;x++)
	 {
		for(y=0;y<NrofElements-1;y++)
		{
			if (arr1[y] < arr1[y+1])
				{
					Temp = arr1[y];
					arr1[y] = arr1[y+1];
					arr1[y+1] = Temp;
				};
		};
	 }
	 printf("Enter Numbers in order:");
	 for(x = 0;x < NrofElements;x++){
		 printf("%d\n",arr1[x]);
	 }
	 getch();
	 return 0;
 }