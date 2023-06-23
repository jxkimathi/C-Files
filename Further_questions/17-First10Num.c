#include <stdio.h>

// main - A program that displays and finds the sum of the first 10 numbers

int main()
{
    int index, soln = 0;

    for (index = 1; index <= 10; index++)
    {
    printf("%d\n", index);
    soln = soln + index;
    }

    printf("The sum is %d\n", soln);

    return (0);
}