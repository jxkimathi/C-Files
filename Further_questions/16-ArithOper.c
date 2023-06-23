#include <stdio.h>

// main - A program that shows the use of arithmetic operators using switch case

int main()
{
    int num1, num2, soln;
    char oper;

    printf("Enter the arithmetic operator (+ - / *) ");
    scanf("%c", &oper);

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);


    switch(oper)
    {
        case '+':
          soln = num1 + num2;
          printf("%d + %d = %d\n", num1, num2, soln);
          break;

        case '-':
          soln = num1 - num2;
          printf("%d - %d = %d\n", num1, num2, soln);
          break;

        case '*':
          soln = num1 * num2;
          printf("%d * %d = %d\n", num1, num2, soln);
          break;

        case '/':
          soln = num1 / num2;
          printf("%d / %d = %d\n", num1, num2, soln);
          break;  

        default:
          printf("Invalid choice!\n");
          break;
    }

    return (0);
}