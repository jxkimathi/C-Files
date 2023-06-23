#include <stdio.h>

int findMax(int x, int y) // a function to find the maximum value
{
    //if (x > y)
    //return (x);

    //else
    // return (y);
    
        //   (if) (return) (else) 
    return (x > y) ? x : y; // works much better and simpler than using if/else
}

int main() // main function of the code
{
    // ternary operator = shortcut to if/else when assigning/returning a value
    // (condition) ? value if true : value if false
    // (x > b) ? x : y // If x is greater than y, return x, otherwise return y

    int max = findMax(3, 4); // calling the function

    printf("%d\n", max);

    return (0);

}