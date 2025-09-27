#include<stdio.h>
int main()
{
	int category, item;
	printf("---Online Food Catering System---");
	printf("\nEnter your category: \n1.Fast Food 2.Drinks\n");
	scanf("%d", &category);
	switch(category){
		case 1:
			printf("Fast Food Menu");
			printf("\nEnter the item: \n1.Steak \n2.Pasta \n3.Pizza\n");
			scanf("%d", &item);
			switch(item){
				case 1:
					printf("\nYou ordered Steak.");
					break;
				case 2:
				    printf("\nYou ordered Pasta.");
					break;
				case 3:
				    printf("\nYou ordered Pizza.");
					break;
				default:
				    printf("Invalid Choice.");			
			}
			break;
		case 2:
		    	printf("Drinks Menu");
			printf("\nEnter the item: \n1.Coffee \n2.Frappe \n3.Cold Drink\n");
			scanf("%d", &item);
			switch(item){
				case 1:
					printf("\nYou ordered Coffee.");
					break;
				case 2:
				    printf("\nYou ordered Frappe.");
					break;
				case 3:
				    printf("\nYou ordered Cold Drink.");
					break;
				default:
				    printf("Invalid Choice.");
			}
			break;
	}
}
