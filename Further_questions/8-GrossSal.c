#include <stdio.h>

// main - Program to find the gross salary

int main()
{
    int basic, gross, da, ta;

    printf("Enter the basic salary: $");
    scanf("%d", &basic);

    da = (10 * basic) / 100;
    ta = (12 * basic) / 100;
    
    gross = da + ta + basic;
    printf("Gross salary is: $%d\n", gross);

    return (0);
}