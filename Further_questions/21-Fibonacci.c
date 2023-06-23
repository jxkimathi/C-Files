#include <stdio.h>

// main - A program that prints the fibonacci sequence up to 100

int main()
{
    int a = 1, b = 1, c = 0, index;
    printf("%d\t%d\t", a, b);              // printf 1 and 1 because they are the first two values of fibonacci

    for (index = 0; index <= 10; index++) // Starts from 0 and increases till 10
    {
        c = a + b;                        // c = 1 + 1 = 2; third number of fibonacci (Continues adding)
 
        if (c < 100)                      // all the way till 100
        printf("%d\t", c);                // print the integer

        a = b; 
        b = c;
    }

    return (0);
}