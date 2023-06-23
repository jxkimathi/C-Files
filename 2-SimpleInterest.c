#include <stdio.h>

/*main - Calculates Simple Interest*/

int main (void)
{
    int p, r, t;
    float si;

    printf("Enter principle: ");
    scanf("%d", &p);

    printf("Enter rate: ");
    scanf("%d", &r);

    printf("Enter the time in years: ");
    scanf("%d", &t);

    si = (p * t * r) / 100;
    printf("Simple Interest is %f", si);

    return (0);
    
}