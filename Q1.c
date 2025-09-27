#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the integers: \n");
	scanf("%d\n%d\n%d", &a,&b,&c);
	if (a>b && a<c){
		printf("A is the second largest number.");
	}
	else if (b>a && b<c){
		printf("B is the second largest number.");
	}
	else{
		printf("C is the second largest number.");
	}
	return 0;
}
