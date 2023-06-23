#include <stdio.h>

// main - A program that shifts a number by two bits to the left

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    a = a << 2;
    printf("The number shifted to the left is %d\n", a);

    return (0);
}