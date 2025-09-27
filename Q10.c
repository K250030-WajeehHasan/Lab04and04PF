#include<stdio.h>
int main()
{
    int age, movie, ticketType;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 12){
        ticketType = 1;
    }
    else if (age >= 12 && age < 60){
        ticketType = 2;
    }
    else{
        ticketType = 3;
    }
    printf("Select movie: \n1. Action \n2. Comedy \n3. Horror\n"); 
    printf("Enter your choice (1-3): ");
    scanf("%d", &movie);
    if (ticketType == 1){
        printf("Child ticket.\n");
    }
    else if (ticketType == 2){
        printf("Adult ticket.\n");
    }
    else{
        printf("Senior Citizen ticket.\n");
    }
    switch(movie){
        case 1:
            printf("You selected Action movie.\n");
            break;
        case 2:
            printf("You selected Comedy movie.\n");
            break;
        case 3:
            printf("You selected Horror movie.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }   
    return 0;
}
