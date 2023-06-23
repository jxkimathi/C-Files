#include <stdio.h>

/*main - Program that shows whether the year is a leap year or not*/

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    year = year % 4;
    
    if (year == 0)
    printf("This is a leap year ", year);

    else
    printf("This is not a leap year ", year);

    return (0);
    
}