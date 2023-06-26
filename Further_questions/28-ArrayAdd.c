#include <stdio.h>

// main - A progrm to add 10 elements in an array and show their average

int main()
{
    int array[10], i, sum = 0;
    double avg;

    printf("Enter the elements of the array: ");

    for (i = 0; i < 10; i++)
    scanf("%d", &array[i]);

    for (i = 0; i < 10; i++)
    sum = sum + array[i];    
    printf("The sum is %d\n", sum);

    avg = sum / 10;
    printf("The average is %.2lf\n", avg);

    
    return (0);
}