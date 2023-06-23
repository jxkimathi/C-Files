#include <stdio.h>

int main()
{
    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};
    int index;

    // printf("%d bytes\n", sizeof(prices)); // 48 bytes for 6 doubles.....1 double will use 8 bytes


    //                        48 bytes     /      8 bytes  =   6 
    for (index = 0; index < sizeof(prices) / sizeof(prices[0]); index++)
    {
        printf("$%.2lf\n",prices[index]);
    }
    
    return (0);
    
}