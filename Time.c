#include <stdio.h>
#include <time.h> // Header file for time

void getDateTime();

int main()
{
    printf("Before getDateTime() is called\n");

    getDateTime();
    printf("After getDateTime() is called\n");

    return (0);
}

void getDateTime()
{
    time_t now; // time_t = arithmetic type to represent time

    printf("Within getDateTime(): \n");
    
    time(&now);  // Calls the time now
    printf("Current date and time now is: %s\n", asctime(localtime(&now))); // asctime = converts date and time
}