#include <stdio.h>

// main - A program that prints stars in the first sequence

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)     // Number of rows
    {
        for (j = 1; j <= i; j++) // Number of stars
          printf("*");
          printf("\n");    
    }  

    return (0);
}