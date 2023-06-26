#include <stdio.h>

int addData(int *list, int max);
void printChar(char *ch);

int main()
{
    char str[] = "I like boobies";
    char *ptr_str;
    int list[] = {1, 2, 3, 4, 5};
    int *ptr_list;

    ptr_str = str;  // Copies the contents of str into ptr_str
    printChar(ptr_str);
    printChar(str);

    ptr_list = list; // Copies the contents of list into ptr_list
    printf("After addData() is implemented: %d\n", addData(ptr_list, 5));
    printf("After addData() is implemented: %d\n", addData(list, 5));

    return (0);
}

// Produces the sum of the numbers in the array
int addData(int *list, int max) // Array list has been highlighted by a pointer *list
{
    int result = 0;
    int i;

    for (i = 0; i < max; i++)
    result = result + list[i];

    return (result);
}

// Prints out the character string
void printChar(char *ch) // Character str has been highlighted by the pointer *ch
{
    printf("%s\n", ch);
}