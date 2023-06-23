#include <stdio.h>

/*main - A program to use bitwise operators*/

int main(void)
{
    int x;

    printf("Enter the number desired: ");
    scanf("%d", &x);

    x = x << 2;
    printf("After shifting to the left the value is: %d\n", x);

    x = x >> 2;
    printf("After shifting to the right the value is: %d\n",x);

    return (0);
    
}