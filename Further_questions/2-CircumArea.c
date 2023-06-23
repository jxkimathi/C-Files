#include <stdio.h>

// main - A program tp find the circumference and area of a circle

int main()
{
    double radius, circumference, area;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    circumference = PI * radius * 2;
    printf("The circumference of the circle is: %.3lf\n", circumference);

    area = PI * radius * radius;
    printf("The area of the circle is: %.3lf\n", area);

    return (0);
}