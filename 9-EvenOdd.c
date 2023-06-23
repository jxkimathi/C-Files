#include <stdio.h>

/*main - Program to find even and odd numbers*/

int main(void)
{
    int c;

    printf("Enter number: ");
    scanf("%d", &c);

    c = c % 2;
    if (c == 0)
    printf("This is an even number ", c);

    else
    printf("This is an odd number ", c);

    return (0);
    
}