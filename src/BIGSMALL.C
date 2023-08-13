/*
Pogrammer- Aarav Shah
Statement-task
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int NrofElements;
	int Largest=0;
	int Smallest=0;
	int x;
	int arr[100];
	clrscr();
	printf("Enter the number of elements");
	scanf("%d" ,&NrofElements);
	//printf("\nintitial value of Largest is %d",Largest);
	//printf("\nintitial value of Smallest is %d",Smallest);
	for (x = 0;x < NrofElements;x++){
		printf("\nEnter Number %d:" ,x+1);
		scanf("%d" , &arr[x]);
	}
	for (x = 0; x < NrofElements; x++) {
	if (Largest < arr[x])
	    Largest = arr[x];
		//printf("\nLargest Elements: %d" ,Largest);
		//printf("\nArray Value: %d" ,arr[x]);
    }
	printf("\nLargest Elements: %d" ,Largest);
for (x = 0; x < NrofElements; x++) {
	if (Smallest > arr[x])
	    Smallest = arr[x];
	       //printf("\nSmallest Elements: %d" ,Smallest);
	       //printf("\nArray Value: %d" ,arr[x]);
    }
	printf("\nSmallest Elements: %d" ,Smallest);

	getch();
	return 0;
}