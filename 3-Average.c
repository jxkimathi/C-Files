#include <stdio.h>

/*main - Gets the average of 3 numbers*/

int main(void)
{
    int a, b, c;
    float avg;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    avg = (a + b + c) / 3;
    printf("Your average is: %f", avg);
    
    return (0);
    
}