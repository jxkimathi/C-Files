#include <stdio.h>

int addData(int list[][5], int max, int max2);
int dataAdd(int *list, int max, int max2);

int main()
{
    int list[2][5] = {1, 2, 3, 4, 5,
                      5, 4, 3, 2, 1};
    int *ptr_list;

    printf("Before addData() the sum is %d\n", addData(list, 2, 5));

    ptr_list = &list[0][0];
    printf("After addData() the sum is %d\n", dataAdd(ptr_list, 2, 5));

    return (0);
}

int addData(int list[][5], int max, int max2)
{
    int result = 0, i, j;

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max2; j++)
        {
            result += list[i][j];
        }
    }
    return (result);
}

int dataAdd(int *list, int max, int max2)
{
    int i, j, result = 0;

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < max2; j++)
        {
            result += *(list + (i * max2) + j);
        }
    }
    return (result);
}