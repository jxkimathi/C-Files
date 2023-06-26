#include <stdio.h>

// main - A program that takes in an input of 5 numbers and sorts them in ascending order

void sort(int array[], int size) // BubbleSort Algorithm
{
    int i, j, temp;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size-i- 1); j++)
        {
            if (array[j] > array[j+1])  // Perform a swap
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}

void print(int array[], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}

int main()
{
    int array[5];
    int size = sizeof(array) / sizeof(array[0]);

    printf("Please enter the first number: ");
    scanf("%d", &array[0]);

    printf("Please enter the second number: ");
    scanf("%d", &array[1]);

    printf("Please enter the third number: ");
    scanf("%d", &array[2]);

    printf("Please enter the fourth number: ");
    scanf("%d", &array[3]);

    printf("Please enter the fifth number: ");
    scanf("%d", &array[4]);

    sort(array, size);
    print(array, size);

    return (0);
}