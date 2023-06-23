#include <stdio.h>

int main()
{
    int num, i, x = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (i = 2; i <= num-1; i++)
    {
        if (num % i == 0)
        x = 1;
        break;
    }

    if (x == 0)
    printf("%d is a prime number!\n", num);

    else
    printf("%d is not a prime number!\n", num);

    return (0);
}

// Faulty despite this being correct online