#include <stdio.h>

/*main - A program that prints odd and even numbers*/

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    goto even;

    else
    goto odd;

    odd: printf("Odd Number\n");
    goto end;

    even: printf("Even Number\n");
    goto end;

    end:

    return (0);
    
}