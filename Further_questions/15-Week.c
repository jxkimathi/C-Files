#include <stdio.h>

// main - A program to display the days of the week using switch case

int main()
{
    int day;

    printf("Enter the number to print the day of the week (1 - 7): ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
          printf("Sunday!\n");
          break;

        case 2:
          printf("Monday!\n");
          break;

        case 3:
          printf("Tuesday!\n");
          break;

        case 4:
          printf("Wednesday!\n");
          break;

        case 5:
          printf("Thursday!\n");
          break;

        case 6:
          printf("Friday!\n");
          break;

        case 7:
          printf("Saturday!\n");
          break;        

        default:
          printf("Invalid choice!\n");
          break;
    }

    return (0);
}