#include <stdio.h>

/*main - Converts the temperature from centigrade into fahreheit*/

int main(void)
{
    float cent, fahr;

    printf("Enter the temperature in Centigrade: ");
    scanf("%f", &cent);
    
    fahr = 32 + (cent * 9) / 5;
    printf("The temperature in Fahrenheit is: %f", fahr);

    return (0);
    
}