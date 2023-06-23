#include <stdio.h>

/*main - Finds total and calculates percentage of 5 subjects and grades as follows*/

/*If per > 80 "A+"*/
/*If per >= 65 && per <= 80 "A"*/
/*If per >= 50 && per <= 65 "B"*/
/*If per >= 42 && per <= 50 "C"*/
/*if per < 42 "Fail"*/

int main()
{
    int m, e, p, c, h, total;
    float per;

    printf("Enter the marks: ");
    scanf("%d, %d, %d, %d, %d", &m, &e, &p, &c, &h);

    total = m + e + p + c + h;
    printf("Total marks is: %d\n", total);

    per = (total * 100) /  (5 * 100);
    printf("Percentage is: %f\n", per);

    if (per > 80)
    printf("A+\n");

    else if (per >= 65 && per <= 80)
    printf("A\n");

    else if (per >= 50 && per <= 65)
    printf("B\n");

    else if (per >= 42 && per <= 50)
    printf("C\n");

    else if (per < 42)
    printf("Fail\n");

    return (0);
    
}