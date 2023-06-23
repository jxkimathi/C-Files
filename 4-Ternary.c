#include <stdio.h>

/*main - Compares two numbers using ternary operators*/

int main(void)
{
    int a, b;

    printf("Enter the two numbers to be compared: ");
    scanf("%d, %d", &a, &b);

    if (a > b)
    printf("A is greter than B");

    else if (b > a)
    printf("B is greater than A");
    
    return (0);
    
}