#include <stdio.h>
#include <math.h>

// main - A program to find the factorial of a number

int main()
{
    int num, fact = 1, index;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (index = num; index >= 1; index--) // the count is on par with the number written and counting down
    fact = fact * index;                   // The number * the previous number

    printf("The factorial is %d\n", fact);

    return (0);
}