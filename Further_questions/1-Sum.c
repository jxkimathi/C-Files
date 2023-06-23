#include <stdio.h>

// main - A program that gets the sum of two numbers

int main()
{
    int a, b, sum;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("The sum is: %d\n", sum);

    return (0);
}