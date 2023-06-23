#include <stdio.h>

// main - Program to find the greatest of three numbers

int main()
{
    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    printf("%d is the greatest number!\n", a);

    if (b > a && b > c)
    printf("%d is the greatest number!\n", b);

    if (c > a && c > b)
    printf("%d is the greatest number!\n", c);

    return (0);
}