#include <stdio.h>

int main()
{
// Variable = Allocated space in the memory
// We need to declare the variable then initialize it

int x; // Declaration
x = 123; // Initialization

// Declaration & Initialization
int age = 21; // You can write intager names that are different from just letters

float gpa = 3.02; // Floating point number

char grade = 'A'; // Single character
char name[] = "Bro"; // Array of characters

printf("Hello %s\n", name); 
printf("You are %d years old\n", age);
printf("Your average grade is is %c\n", grade);
printf("Your gpa is %f\n", gpa);

return (0);

}

// %s: Character string
// %d: Integer value
// %f: Floating point number
// %c: Character variable