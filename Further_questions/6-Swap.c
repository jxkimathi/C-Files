#include <stdio.h>

// main - Program to show swap of two numbers without another variable

int main()
{
    int a, b; // lets say a is 7 and b is 6

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    a = a + b; // a = 7 + 6 = 13
    b = a - b; // b = 13 - 6 = 7  
    a = a - b; // a = 13 - 7 = 6

    printf("After swapping the value of a is %d and the value of b is %d\n", a, b);

    return (0);
}