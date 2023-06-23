#include <stdio.h> // header file for the standard library
#include <ctype.h> // header file for  string functions

int main ()
{
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)?: \n");
    scanf("%c", &unit);

    unit = toupper(unit); // toupper makes the input into uppercase

    if (unit == 'C')
    {
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in Fahrenheit is: %.1f\n", temp);
    }

    else if (unit == 'F')
    {
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("The temperature in Celsius is: %.1f\n", temp);
    }

    else
       printf("%c is not a valid unit of measurement\n");
    
    return (0);

}