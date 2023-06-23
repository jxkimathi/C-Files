#include <stdio.h>

int main()
{
    // nested loops = a loop inside a loop

    int rows, columns, i, j;
    char symbol;

    printf("Enter a symbol to use: ");
    scanf("%c", &symbol);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);


    for (i = 1; i <= rows; i++)         // deals with the number of rows
    {
        for (j = 1; j <= columns; j++)  // deals with the number of columns
        {
            printf("%c", symbol);
        }
        printf("\n");
    }


    return (0);
}