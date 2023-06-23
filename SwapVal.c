#include <stdio.h>
#include <string.h>

/*
void swap(char x, char y, char temp)
{
    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;   // puts the value of x into temp
    x = y;      // x can now have the value of y since it's value is in temp
    y = temp;   // y gets the value of x from temp hence successfully swapping

    printf("x = %c\n", x);
    printf("y = %c\n", y);
}
*/

int main()
{
    char x[15] = "water";
    char y[15] = "lemonade";
    char temp[15];

    strcpy(temp, x);  // copies x into temp
    strcpy(x, y);     // copies y into x
    strcpy(y, temp);  // copies temp into y

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return (0);
}