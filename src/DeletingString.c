/*
Pogrammer- Aarav Shah
Statement-Deleting something from string
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main()m{
	int Much
	int Elements;
	int Deleting;
	int x;
	int Found;
	 clrscr();
	 printf("Enter how many elements\n");
	 scanf("%d" ,&Much)
	 printf("Enter how many elements\n");
	 for (x=0;x < Much;x++){
		 scanf("%d",&Elements)
	 }
	 printf("Enter the element to be deleted\n");
	 scanf("%d" ,&Deleting)
	 for (x = 0;x < Much;x++){
		 if(Element[x] == Elements){
			 Found = 1;
		 }
	 }
	 if(Found == 1){
		 
		 printf("The Result is %d" \n)
		 for (x= 0;x < Much;x++){
			 printf("%d\n" ,Elements[x])
		 }
		 
	 }
	 else{
		 printf("Element %d not found" ,Deleting)
	 }	 
	 getch();
	return 0;
}