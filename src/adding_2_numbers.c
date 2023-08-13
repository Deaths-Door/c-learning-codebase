/* 
Statement - Adding 2 Numbers
Programmer - Aarav Shah
Date-19 July 2020
Version - 1.0 
*/


int main(){
	int num1;
	int num2;
	int num3;
	
	clrscr();
	printf("Enter First Number\n");
	scanf("%d",&num1);
	printf("Enter Second Number\n");
	scanf("%d",&num2);
	num3=num1+num2;
	printf("num1 + num2 = %d",num3);
	getch();
	return 0;
}