/* 
Can you create a function that;
    * Takes two numbers
    * Performs Multiplication of the two numbers
    * Returns the result
*/

#include <stdio.h>

int mul(int x, int y)
{
    int mul = x * y;

    return (mul);
}

int main()
{
    int x, y;
    
    printf("Enter the two digits: ");
    scanf("%d, %d", &x, &y);

    int result = mul(x, y);
    printf("%d * %d = %d\n", x, y, result);

    return (0);
}