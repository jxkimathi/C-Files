#include <stdio.h>

/*main - Using switch cases to have area of different shapes*/

/*case 11: Area of a cirle*/
/*case 22: Area of a rectangle*/
/*case 33: Area of a square*/
/*case 44: Area of a triagle*/

int main()
{
    int i, r, l, w, aor, s, aos, b, h, aot;
    float aoc;

    printf("Switch case 11: Area of a circle\n");
    printf("Switch case 22: Area of a rectanle\n");
    printf("Switch case 33: Area of a square\n");
    printf("Switch case 44: Area of a triangle\n");

    printf("Enter switch case number: \n");
    scanf("%d", &i);

    switch(i)
    {
        case 11: printf("Enter the radius: \n");
        scanf("%d", &r);
        aoc = 3.14 * r * r;
        printf("Area of the circle is: %f\n", aoc);
        break;

        case 22: printf("Enter the length and with: \n");
        scanf("%d, %d", &l, &w);
        aor = l * w;
        printf("Area of the rectangle is: %d\n", aor);
        break;

        case 33: printf("Enter the side: \n");
        scanf("%d", &s);
        aos = s * s;
        printf("Area of the square is: %d\n", aos);
        break;

        case 44: printf("Enter the base and the height: \n");
        scanf("%d, %d", &b, &h);
        aot = (b * h) / 2;
        printf("Area of the triangle is: %d\n", aot);
        break;

        default: printf("Invalid choice!\n");
    }

    return (0);
    
}