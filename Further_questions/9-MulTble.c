#include <stdio.h>

// main - Program to print the multiplication rable of any number

int main()
{
    int num, y, soln;

    printf("Enter the number which you want the table for: ");
    scanf("%d", &num);

    for (y = 1; y <= 10; y++)
    {
        soln = num * y;
        printf("%d x %d = %d\n", num, y, soln);
    }
    
    return (0);
}