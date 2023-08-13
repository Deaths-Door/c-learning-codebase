/*
Pogrammer- Aarav Shah
Statement- Stack with Arrays
Date - 8 August 2020
Version- 2.0 */

#include <stdio.h>
#include <conio.h>

int main(){
	
	int Option;
	int x;
	int Stack [1000];
	int LengthofArray = 0;
	do{
		clrscr();
		printf("This program is to simlulate Stack\n");
		printf("Choose Option:\n 1-Add number \n 2-Remove Number \n 3-Print Stack \n 4-Exit\n Choose your Option: ");
		scanf("%d",&Option);
		switch(Option){
			case 1 :
				 // Option 1
				  printf("Enter a number:");
				  scanf("%d",&Stack[LengthofArray]);
				  LengthofArray++ ;
				  //getch();
				  break;
			case 2 :
				 // Option-2
				  if(LengthofArray != 0){
					  printf(" The removed number :%d",Stack[LengthofArray-1]);
					  LengthofArray = LengthofArray -1;
				  }
				  else{
					  printf("Can't Remove Anything as Array is empty");		
					  };
				   getch();
				  break;
			case 3 :
				 // Option 3
				if (LengthofArray > 0){
					for(x = LengthofArray - 1;x >= 0;x--){
					  printf("%d ",Stack[x]);
				  };
				}
				else{
					printf("Array is empty\n");
				};
				  getch();
				  break;
			case 4 :
				 // Option 4
				  printf("Press any key to exit !!!");
				  break;
		}
	}while(Option !=4);
	return 0;
}