#include <stdio.h>

// main - A program to find out whether the year is leap or not

int main()
{
    int year;

    printf("Please enter the year to confirm: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    printf("%d is a leap year!\n", year);

    else
    printf("%d is not a leap year!\n", year);

    return (0);
}