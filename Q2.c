#include<stdio.h>
int main()
{
	float unit, electricityBill;
	printf("Enter the units consumed: \n");
	scanf("%f", &unit);
	if ( unit<=100 ){
		electricityBill = unit*5;
	}
	else if ( unit<=200 ){
		electricityBill = (100*5)+(200-unit)*7;
	}
	else if ( unit<=300 ){
		electricityBill = (100*5)+(100*7)+(300-unit)*10;
	}
	else {
		electricityBill = (100*5)+(100*7)+(100*10)+(unit-300)*15;
	}
	printf("The Electricity Bill is: %.2f", electricityBill);
	return 0;
}
