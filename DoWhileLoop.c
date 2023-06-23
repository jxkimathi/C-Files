#include <stdio.h>

int main()
{
    // while loop = checks a condition, THEN executes a block of code if condition is true
    // do while loop = always executes a block of code once, THEN checks a condition

    int num = 0;
    int sum = 0;

    /*
    while (num > 0)                         // checks this condition first which is why the code will say sum is 0
    {
       printf("Enter a number above 0: ");
       scanf("%d", &num);

       if (num > 0)
       sum += num;   // sum = sum + num;
    }
    */

   do{                                       // here the code runs once then checks the condition
       printf("Enter a number above 0: ");
       scanf("%d", &num);

       if (num > 0)
       sum += num;
    }while (num > 0);                        // the code will run until the input gets a number below zero

    printf("The sum is %d\n", sum);

    return (0);
}