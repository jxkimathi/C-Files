#include <stdio.h>

// main - A program that prints stars in sequence 3

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)                    // The number of rows
    {
        for (j = 5; j >= i; j--)                // The number of spaces
        printf(" ");

        {
            for (k = 1; k <= (i * 2 - 1); k++)  // The number of stars on every row
            printf("*");
        }

        printf("\n");
    }

    return (0);
}