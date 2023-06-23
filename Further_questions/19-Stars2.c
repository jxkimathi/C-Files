#include <stdio.h>

// main - A program that displayes stars in sequence 2

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)      // Number of rows
    {
        for (j = 5; j >= i; j--)  // Number of spaces from right
            printf(" ");

        for (k = 1; k <= i; k++)  // Number of stars
            printf("*");
            printf("\n");
    }

    return (0);
}