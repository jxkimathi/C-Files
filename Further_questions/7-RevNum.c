#include <stdio.h>

// main - Program to reverse a number

int main()
{
    int x, a, rev = 0; // lets say x is 455, a is 10 and rev is 0

    printf("Enter the number: ");
    scanf("%d", &x);

    while (x >= 1)
    {
       a = x % 10;         // a = 455 % 10 = 5
       rev = rev * 10 + a; // rev = 0 * 10 + 5 = 5
       x = x / 10;         // x = 455 / 10 = 45
    }

    printf("The reverse is %d\n", rev);

    return (0);
}