#include <stdio.h>

int main()
{
    // switch - A more efficient alternative to using many "else if" statements
    //        - Allows a value to be tested for equality against many cases

    char grade;

    printf("Enter a letter grade: \n");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A': // we are dealing with chars so use letters...when dealing with int use integers
            printf("Perfect!\n"); // What to be outputted when the grade is entered
            break; // exit out of a switch case to prevent all printf statements while running
        case 'B':
            printf("You did good\n");
            break;
        case 'C':
            printf("You did okay\n");
            break;
        case 'D':    
            printf("At least it's not an F!\n");
            break;
        case 'F':
            printf("YOU FAILED!\n");
            break;
        default:
            printf("Please enter only valid grades!\n");
    }

    return (0);

}