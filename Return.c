#include <stdio.h>
#include <math.h>

double square(double x) // change void to the variable you expect to return...in this case a double 
{
    return (x * x); // this is the working to get a square of a number
}

double power(double y) // a function returning the double of working out power
{
    return (pow(y, y)); // this is the working to get the power of a number
}

int main()
{
    // return - returns a value back to a calling function

    double x = square(3.14);
    double y = power(3);

    printf("%.4lf\n", x);
    printf("%.4lf\n", y);

    return (0); // exit status to show success...returning an int, 0

}