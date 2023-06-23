#include <stdio.h>

// main - A program that converts temperature from Celcius to Fahrenheit

int main()
{
    double cent, fahr;

    printf("Enter the temperature in Celcius ");
    scanf("%lf", &cent);

    fahr = 32 + (cent * 9) / 5;
    printf("The temperature in Fahrenheit is %.3lf\n", fahr);

    return (0);
}