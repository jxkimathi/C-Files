#include <stdio.h>

int main()
{
    char *p, x;
    double *ptr, z, *ptrr, a;
    char array[24]; 

    p = &x;
    printf("The address of *p is %p\n", p);
    printf("The address of *p + 1 is %p\n", p + 1 * sizeof(char));

    ptrr = &a;
    ptr = &z;
    printf("The address of ptr is %p\n", ptr);
    printf("The address of ptrr is %p\n", ptrr);

    ptr = ptrr - 5;
    printf("The new address of ptr is %p\n", ptr);
    printf("The new address of ptrr is %p\n", ptrr);
    printf("The space between ptrr and ptr is %d\n", ptrr - ptr);

    // array[n] = *(p + n)
    // array[5] = *(p + 5)

    return (0);
}