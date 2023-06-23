#include <stdio.h>

// main - A program to find the simple interest

int main ()
{
    double prin, rate, time, si;

    printf("Enter the principal: $");
    scanf("%lf", &prin);

    printf("Enter the rate: ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%lf", &time);

    si = (prin * rate * time) / 100;
    printf("The simple interest annually is $%.3lf\n", si);

    return (0);
}