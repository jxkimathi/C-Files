#include <stdio.h>
#include <math.h>

int main()
{
    double A;
    double B;
    double C;
    double area;

    printf("Enter the base length: ");
    scanf("%lf", &A);

    printf("Enter the height: ");
    scanf("%lf", &B);

    C = sqrt(((A * A) + (B * B)));
    printf("The length of the hypotenuse is: %.3lf\n", C);

    area = (A * B) / 2;
    printf("The area is: %.3lf\n", area);

    return (0);
    
}