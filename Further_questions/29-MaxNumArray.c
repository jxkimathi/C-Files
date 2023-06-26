#include <stdio.h>

// main - A program to find the largest number in an array

int main()
{
    int a[5], max, i;

    printf("Enter the elements of the array: ");

    for (i = 0; i < 5; i++)
    scanf("%d", &a[i]);

    max = a[0];

    for (i = 1; i < 5; i++)
    {
        if (max < a[i])
        max = a[i];
    }

    printf("The max number is %d\n", max);
    return (0);
}