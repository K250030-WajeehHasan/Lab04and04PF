#include<stdio.h>
#include<math.h>
int main()
{
    float emi, amount, rate;
    int type, time;
    printf("Enter the loan amount: ");
    scanf("%f", &amount);
    printf("Enter time period in years: ");
    scanf("%d", &time);
    printf("Enter type: 1.Simple Interest 2.Compound Interest: ");
    scanf("%d", &type);
    printf("Enter annual interest rate: ");
    scanf("%f", &rate);
    if (type == 1)
    {
        emi = (amount + (amount * rate * time) / 100) / (time * 12);
        printf("EMI for Simple Interest is: %.2f\n", emi);
    }
    else if (type == 2)
    {
        emi = (amount * pow((1 + rate / 100), time)) / (time * 12);
        printf("EMI for Compound Interest is: %.2f\n", emi);
    }
    else
    {
        printf("Invalid type selected.\n");
    }
    return 0;
}
