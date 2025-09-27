#include<stdio.h>
int main()
{
	int choice1, choice2;
	printf("---Library Management System---");
	printf("\nEnter your choice: (1.Books and 2.Magazines)\n");
	scanf("%d", &choice1);
	switch(choice1){
		case 1:
		    printf("You selected books. \n");
		    printf("Enter your choice: (1.Issue and 2.Return)\n");
		    scanf("%d", &choice2);
		    switch(choice2){
		  	    case 1:
			        printf("You issued a book. \n");
				    break;
			    case 2:
			        printf("You returned a book. \n");
				    break;	
		    }
		    break;
		case 2:
		    printf("You selected magazines. \n");
		    printf("Enter your choice: (1.Issue and 2.Return)\n");
		    scanf("%d", &choice2);
		    switch(choice2){
		  	    case 1:
			        printf("You issued a book. \n");
				    break;
			    case 2:
			        printf("You returned a book. \n");
				    break;
		}
		default:
			printf("Invalid Choice.");
	}
	return 0;
}
