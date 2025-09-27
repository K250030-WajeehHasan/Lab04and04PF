#include<stdio.h>
int main()
{
    int department, course;
    printf("1. CS\n2. EE\n3. BBA\n");
    printf("Enter department number (1-3): ");
    scanf("%d", &department);
    switch(department){
        case 1:
            printf("Courses available in CS:\n1. Programming Fundamentals\n2. Data Structures\n3. Artificial Intelligence\n");
            printf("Enter course number (1-3): ");
            scanf("%d", &course);
            switch(course){
                case 1:
                    printf("You selected Programming Fundamentals in CS.\n");
                    break;
                case 2:
                    printf("You selected Data Structures in CS.\n");
                    break;
                case 3:
                    printf("You selected Artificial Intelligence in CS.\n");
                    break;
                default:
                    printf("Invalid course number for CS.\n");
            }
            break;
        case 2:
            printf("Courses available in EE:\n1. Circuit Analysis\n2. Signal Processing\n3. Control Systems\n");
            printf("Enter course number (1-3): ");
            scanf("%d", &course);
            switch(course){
                case 1:
                    printf("You selected Circuit Analysis in EE.\n");
                    break;
                case 2:
                    printf("You selected Signal Processing in EE.\n");
                    break;
                case 3:
                    printf("You selected Control Systems in EE.\n");
                    break;
                default:
                    printf("Invalid course number for EE.\n");
            }
            break;
        case 3:
            printf("Courses available in BBA:\n1. Marketing\n2. Finance\n3. Accounting\n");
            printf("Enter course number (1-3): ");    
            scanf("%d", &course);
            switch(course){
                case 1:
                    printf("You selected Marketing in BBA.\n");
                    break;
                case 2:
                    printf("You selected Finance in BBA.\n");
                    break;
                case 3:
                    printf("You selected Accounting in BBA.\n");
                    break;
                default:
                    printf("Invalid course number for BBA.\n");
            }
            break;
        default:
            printf("Invalid department number.\n");
    }
    return 0;
}
