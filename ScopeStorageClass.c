#include <stdio.h>

const double PI = 3.141593;  // Program scope variable
const char C = 'A'; // Const keyword

int main()
{
    int i = 10, j = 20; // Block scope 1 

    {
        int i, j; // Block scope 2

        for (i = 1; i < 4; i++)
        {
            printf("This is iteration %d of the outer loop.\n", i);

            for (j = 1; j <= 3; j++)
            {
                printf("   This is iteration %d of the inner loop.\n", j);
            }

            printf("This is the end of iteration %d of the outer loop.\n", i);
            printf("\n");
        }

        i = 20, j = 10;
        printf("Circumference = PI * radius * 2\n");
        printf("%lf * %d * 2 = %.3lf", PI, i, PI * i * 2); // PI 1
        printf("\n");
    }

    printf("%d + %d = %d\n", i, j, i + j); // remains unaffected by block scope 2
    printf("\n");

    printf("Area = PI * radius * radius\n");
    printf("%lf * %d * %d = %.3lf\n", PI, i, i, PI * i * i); // PI 2



    return (0);
}


// Scope; - Program      : Global variables
//        - Function     : Local variables that run through the entire function of a program
//        - Block        : Local variables that run through one block of a function
//        - Nested block : Local variables that run through a nested area in a function

// Storage classes; - static   : Has a permanent duration
//                  - register : Variable stored in the CPU
//                  - extern   : Variable can be used outside the function
//                  - const    : Variable remains unchanged throughout the function