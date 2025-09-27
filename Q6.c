#include<stdio.h>
int main()
{
    int shape, result;
    float radius, width, length, breadth, height, area, perimeter;
    printf("Choose the shape to calculate area and perimeter:\n");
    printf("1. Circle\n2. Rectangle\n3. Triangle\n");
    scanf("%d", &shape);
    switch(shape)
    {
        case 1:
            printf("Circle selected.\n");
            printf("1.Area\n2.Perimeter\n");
            scanf("%d", &result);
            switch(result){
                case 1:
                    printf("Enter radius of the circle: ");
                    scanf("%f", &radius);
                    area = 3.14 * radius * radius;
                    printf("Area of the circle: %.2f\n", area);
                    break;
                case 2:
                    printf("Enter radius of the circle: ");
                    scanf("%f", &radius);
                    perimeter = 2 * 3.14 * radius;
                    printf("Perimeter of the circle: %.2f\n", perimeter);
                    break;
                default:
                    printf("Invalid choice for circle.\n");
            }
            break;
        case 2:
            printf("Rectangle selected.\n");
            printf("1.Area\n2.Perimeter\n");    
            scanf("%d", &result);
            switch(result){
                case 1:
                    printf("Enter length and breadth of the rectangle: ");
                    scanf("%f %f", &length, &breadth);
                    area = length * breadth;
                    printf("Area of the rectangle: %.2f\n", area);
                    break;
                case 2:
                    printf("Enter length and breadth of the rectangle: ");
                    scanf("%f %f", &length, &breadth);
                    perimeter = 2 * (length + breadth);
                    printf("Perimeter of the rectangle: %.2f\n", perimeter);
                    break;
                default:
                    printf("Invalid choice for rectangle.\n");
            }
            break;
        case 3:
            printf("Triangle selected.\n");
            printf("1.Area\n2.Perimeter\n");
            scanf("%d", &result);
            switch(result){
                case 1:
                    printf("Enter base and height of the triangle: ");
                    scanf("%f %f", &length, &height);
                    area = 0.5 * length * height;
                    printf("Area of the triangle: %.2f\n", area);
                    break;
                case 2:
                    printf("Enter the lengths of the three sides of the triangle: ");
                    float side1, side2, side3;
                    scanf("%f %f %f", &side1, &side2, &side3);
                    perimeter = side1 + side2 + side3;
                    printf("Perimeter of the triangle: %.2f\n", perimeter);
                    break;
                default:
                    printf("Invalid choice for triangle.\n");
            }
            break;
        }        
    return 0;
}   
