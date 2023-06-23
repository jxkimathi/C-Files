#include <stdio.h>

/*main - Function that finds the largest of three numbers*/

int main(void)
{
    int a, b ,c, d;

    printf("Enter the three numbers: ");
    scanf("%d, %d, %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        d = a;

        else
        d = c;
    }
    else
    {
        if (b > c)
        d = b;
        
        else
        d = c;
    }

    printf("%d is the greatest number", d);

    return (0);
    
}