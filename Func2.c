#include <stdio.h>
#include <math.h>

// Function - A group of related statements that perform a specific task
//          - They help us divide a large program into smaller chunks so that it is easier
//            to understand and modify them.

// Write a function to create a circle and a square of different colours
// We can divide this into 3;
// * A function to create a circle
// * A function to create a rectangle
// * A function to colour the shape


void greet()
{
    printf("Good Morning!\n");
}

// Function Parameters
void calculateSquare(int num)
{
    int square = num * num;
    printf("Square of %d is %d\n", num, square);
}

void addNumbers(int num1, int num2)
{
    int sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);
}

void addNum(double x, double y)
{
    double sum = x + y;
    printf("%.2lf + %.2lf = %.2lf\n", x, y, sum);
}

// Return types
int addNumber(int num1, int num2)
{
    int sum = num1 + num2;

    return (sum); // An integer is being returned
    printf("After return statement!\n"); // Not executed because return exits a function
}

//Function Prototypes - Only included when the function is after the main function
int subNum(int x, int y);

// Standard Library Functions
// printf("");
// sqrt();

// Main Function
int main()
{
    // greet(); // Calling the function
    // calculateSquare(5); // Calling the function....the (5) is the int parameter
    // addNumbers(5, 8); // Calling the function..... (5) and (8) are the parameters
    // addNum(5.2, 4.6); // Calling the function that takes in double parameters

    // int result = addNumber(5, 7); // Assigned an integer
    // printf("Result = %d\n", result);

    // int result = subNum(7, 5);
    // printf("Result = %d\n", result);

    // float result = sqrt(25);
    // printf("Square root is %.2f\n", result);

    return (0);
}

int subNum(int x, int y) 
{
    int sub = x - y;
    
    return (sub);
}