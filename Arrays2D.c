#include <stdio.h>

int main()
{
    // 2D Arrays = An array where each element is an entire array
    //           = Useful when you need a matrix, grid or a table of data

/*
    int num[2][3] = {               // {{1, 2, 3},{4, 5, 6}}
                     {1, 2, 3},     // 2 Rows
                     {4, 5, 6}      // 3 Columns
                     };
*/
    int numbers[3][3];
    int i, j;
    int rows = sizeof(numbers) / sizeof(numbers[0]);           // Number of rows
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);  // Numbers of columns 

    // printf("Rows: %d bytes\t Columns: %d bytes\n", rows, columns);

    numbers[0][0] = 1;    // First column, First row
    numbers[0][1] = 2;    // Second column, First row
    numbers[0][2] = 3;    // Third column, First row
    numbers[1][0] = 4;    // First column, Second row
    numbers[1][1] = 5;    // Second column, Second row
    numbers[1][2] = 6;    // Third oolumn, Second row
    numbers[2][0] = 7;
    numbers[2][1] = 8;
    numbers[2][2] = 9;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return (0);
}