#include <stdio.h>
#include <stdarg.h> // Header file for dealing with variable arguments

double addDouble(int x, ...);

int main()
{
    double d1 = 20.00, d2 = 30.00, d3 = 40.00;

    printf("1: %.2lf + %.2lf = %.2lf\n", d1, d2, addDouble(1, d1, d2)); // 1 = value of x
    printf("2: %.2lf + %.2lf = %.2lf\n", d2, d3, addDouble(2, d2, d3)); // 2 = value of x
    printf("3: %.2lf + %.2lf + %.2lf = %.2lf\n", d1, d2, d3, addDouble(3, d1, d2, d3)); // 3= value of x

    return (0);
}

double addDouble(int x, ...)
{
    va_list ap;     // Calling the variable array list ap (you can name it anyway you want, I settled on ap)
    int i;
    double result = 0;

    va_start (ap, x); // Initializing the array ap and int x

    for (i = 0; i < x; i++)
    {
        result = result + va_arg(ap, double); // Calling the arguments in the array and giving them a type
    }

    va_end (ap); // Normal return to the function

    return (result);
}