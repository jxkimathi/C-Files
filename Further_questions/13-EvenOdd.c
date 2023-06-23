#include <stdio.h>

// main - A program to find out whether the input number is eve or odd

int main()
{
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    if (a % 2 == 0)
    printf("%d is an even number!\n", a);

    else
    printf("%d is not an even number!\n", a);
    
    return (0);
}