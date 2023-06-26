#include <stdio.h>

// main - A program to show the result of adding two pointers

int main()
{
    int x, *p1, y, *p2, sum;

    printf("Enter the first number: ");
    scanf("%d", &x);
    p1 = &x;

    printf("Enter the second number: ");
    scanf("%d", &y);
    p2 = &y;

    sum = *p1 + *p2;

    printf("The sum is %d\n", sum);

    return (0);
}