#include <stdio.h>

// main - Takes the input of 5 subjects, finds the total and finally the percentage

int main()
{
    int a, b, c, d, e, sum, total = 500;
    float perc;

    printf("Enter the marks of the first subject: ");
    scanf("%d", &a);

    printf("Enter the marks for the second subject: ");
    scanf("%d", &b);

    printf("Enter the marks of the third subject: ");
    scanf("%d", &c);

    printf("Enter the marks of the fourth subject: ");
    scanf("%d", &d);

    printf("Enter the marks of the fifth subject: ");
    scanf("%d", &e);

    sum = a + b + c + d + e;
    printf(" The total marks are %d\n", sum);

    perc = (sum * 100) / total;
    printf("The percentage is %.3lf\n", perc);

    return (0);
}