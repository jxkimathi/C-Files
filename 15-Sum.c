#include <stdio.h>

/*main - Prints the sum of Odd numbers between 0 to 10 using continue*/

int main()
{
    int i, sum = 0;

    for (i = 1; i <= 10; i++)
    {
        if (i == 2 || i == 4 || i == 6 || i == 8 || i == 10)
        continue;

        else
        sum = sum + i;
    }
    printf("Sum of the odd numbers is : %d\n", sum);

    return (0);
    
}