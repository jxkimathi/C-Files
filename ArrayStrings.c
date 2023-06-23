#include <stdio.h> // Header file for standard i/o
#include <string.h> // Header file for string functions

int main()
{
    int i;
    char cars[][10] = {"Mustang", "Corvette", "Camaro"};

    strcpy(cars[0], "Tesla");

    for (i = 0; i < sizeof(cars) / sizeof(cars)[0]; i++)
    {
        printf("%s\n", cars[i]);
    }

    return (0);
}

/*
- The sizeof() operator used here works by finding the correct index number through working with bytes

- The sizeof(cars) is the total number of bytes of the entire array
- The sizeof(cars[0]) is the number of bytes of the first row of the array

- Let's say that the total size of the array is 10x bytes and the size of the first element is x bytes

  sizeof(cars)              Total size         10x bytes
-------------------    =  ---------------  =  -----------    =   10   (Number of elements)
  sizeof(cars)[0]           sizeof(one)         x bytes
*/