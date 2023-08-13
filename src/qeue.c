 /*
Pogrammer- Aarav Shah
Statement- Queue with Arrays
Date - 8 August 2020
Version- 2.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	int Option;
	int LengthofArray = 0;
	int x;
	int Queue [1000];
	do{
		clrscr();
		printf("This program is to simlulate Queue\n Choose Option:\n 1-Add number \n 2-Remove Number \n 3-Print Queue \n 4-Exit\n Choose your Option: ");
		scanf("%d",&Option);
		switch(Option){
			case 1 :
				printf("Enter a number:");
			    scanf("%d",&Queue[LengthofArray]);
			    LengthofArray++ ;
				 break;
			case 2 :
				if(LengthofArray != 0){
					printf("The removed number :%d",Queue[0]);
					for(x = 0;x < LengthofArray;x++){
						Queue[x] = Queue[x+1];
					};
					LengthofArray = LengthofArray - 1;
				}
				else{
					printf("Can't remove anything as array is empty");
				};
				getch();
				break;
			case 3 :
				if(LengthofArray > 0){
					for(x = 0; x <= LengthofArray - 1;x++){
						printf("%d ",Queue[x]);
					};
				}
				else{
					printf("Array is Empty");
				};	getch();

			case 4 :
				break;
		};
	}while(Option != 4);
	return 0;
}