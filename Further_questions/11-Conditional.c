#include <stdio.h>

// main - A program to show the use of the conditional operator


int main()
{
    int x, y;
    
    printf("Enter the first number: ");
    scanf("%d", &x);

    printf("Enter the second number: ");
    scanf("%d", &y);

  // (if)           (return if true)         else (return if false)
    (x > y) ? printf("%d is greater!\n", x) : printf("%d is greater!\n", y);
    
    return (0);
}