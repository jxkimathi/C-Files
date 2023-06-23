#include <stdio.h> // used when working with the standard c library
#include <stdbool.h> // used when working with booleans

int main()
{
    char a = 'A'; // single character; %c
    char b[] = "Bro"; // array of characters; %s

    float c = 3.141592; // 4 bytes (32 bits of precision)  6 - 7 digits; %f
    double d = 3.141592653589793;  // 8 bytes (64 bits of precision) 15 - 16 digits; %lf

    bool e = true; // 1 byte (true or false); %d

    char f = 100; // 1 byte (-128 to +127); %d or %c
    unsigned char g = 225; // 1 byte (0 to +255); %d or %c

    // also called shorts
    short int h = 32767; // 2 bytes (-32,768 to +32,767); %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,535); %d

    int j = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647); %d
    unsigned int k = 4294967295L; // 4 bytes (0 to +4,294,967,295); %u

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion); %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion); %llu

    //printf("%c\n", a);  // character
    //printf("%s\n", b);  // character array
    //printf("%f\n", c);  // float
    //printf("%lf\n", d); // double
    //printf("%d\n", e);  // bool
    //printf("%d\n", f);  // char as numeric value
    //printf("%d\n", g);  // unsigned char as numeric value
    //printf("%d\n", h);  // short
    //printf("%d\n", i);  // unsigned short
    //printf("%d\n", j);  // int
    //printf("%d\n", k);  // unsigned int
    //printf("%lld", l);  // long long int
    //printf("%llu", m);  // unsigned long long int

    return (0);
}

// Going beyond the maximum range will reset to the minimum value
// char and int are signed so we rarely need to write signed before it
// after the unsigned long long int you have to put a U in order to prevent any errors in your code

// mostly used data types are:
/*
chars
array chars
integers
booleans*/