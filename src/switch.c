/*
Pogrammer- Aarav Shah
Statement- Usage of Switch statement
Date - 19 July 2020
Version- 1.0 */

#include <stdio.h>
#include <conio.h>

int main()
{
    int  ZZ;
	scanf("%d",&ZZ);
    clrscr();

    switch(ZZ==100){
	case 1:
            printf("=100\n");
			break;
	case 0:
            printf("Notegual 100\n");
			break;
		default:
			printf("Invalid condition\n");
    }
    
    getch();
}