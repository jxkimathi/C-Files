#include <stdio.h>

// main - gets the circumference and area of a circle

int main()
{
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    circumference = PI * radius * 2;
    printf("The circumference is %.3lf\n", circumference);

    area = PI * radius * radius;
    printf("The area is %.3lf\n", area);


    return (0);
    
}