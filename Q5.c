#include<stdio.h>
#include<math.h>
int main()
{
	float a, b, c, root1, root2, disc, real, img;
	printf("Enter the coefficients of a, b, c: \n");
	scanf("%f\n%f\n%n", &a, &b, &c);
	disc = (b*b)-(4*a*c);
	if ( disc == 0){
		root1 = -b / (2*a);
		printf("Roots are real and equal: %.2f and %.2f\n", root1, root2);
	}
	else if ( disc>0 ){
		root1 = (-b+sqrt(disc)/(2*a));
		root2 = (-b-sqrt(disc)/(2*a));
		printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
	}
	else {
		real = -b/(2*a);
		img = sqrt(-disc)/(2*a);
		printf("Roots are imaginery: %.2f + %.2f and %.2f - %.2f\n", real, img, real, img);
	}
	return 0;
}
