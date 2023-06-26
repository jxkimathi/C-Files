#include <stdio.h>

// main - A program to display a pattern then sum of the numbers

int main()
{
    int num, i, sum = 0;

    printf("Please enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i = i + 2)
    {
        printf("%d + ", i);
        sum = sum + i;
    }
    printf("%d = %d\n", num, sum + num);

    return (0);
}