#include <stdio.h>

// BUBBLESORT ALGORITHM

void sort(char array[], int size)    // Sorts the array
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j+1])      // If element on the left is bigger, swap
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(char array[], int size)   // Prints the array
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
}

int main()
{
    // int array[] = { 5, 6, 3, 1 ,8, 2, 9, 4, 7};
    char array[] = {'F', 'U', 'K', 'U', 'M', 'E', 'A', 'N'};
    int size = sizeof(array) / sizeof(array[0]);
    

    sort(array, size);
    printArray(array, size);

    return (0);
}