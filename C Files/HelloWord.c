#include <stdio.h>
#include <stdbool.h>>

int main()
{

    // variable = allocated space in memory to store a value.
    //            can access the stored value in memory
    //            * need to declare the type of them/

    int x;       // declaration
    x = 123;     // initialization
    int y = 321; // declaration + initialization

    char grade = 'C';      // single character || %c
    char a = 120;          // 1 byte char (-128 - +127) || %d or %c
    unsigned char b = 255; // 1 byte char (0 - +255) || %d or %c
    char name[] = "Bro";   // array of characters || %s

    bool c = true; // <stdbool.h> 1 byte true or false || %d

    short int d = 21;          // 2 bytes integer (-32.768 - +32.768) || %d
    unsigned short int e = 21; // 2 bytes integer (0 - +65.535) || %d

    int age = 21;        // 4 bytes integer (-2.147.483.648 - +2.147.483.648) || %d
    unsigned int f = 21; // 4 bytes integer (0 - +4.294.967.295) || %u

    long long int g = 1;          // 8 bytes integer (-9 quintillion - +9 quintillion) || %lld
    unsigned long long int h = 1; // 8 bytes integer (0 - +18 quintillion) || %llu

    float gpa = 2.0504030;        // 4 bytes floating point number (6 - 7)|| %0.<n>f - number of digits after "."
    double i = 2.054321234567890; // 8 bytes double numbers (15 - 16) || %0.<n>lf - number of digits after "."

    printf("Hello %s", name);
    printf("\nYou are %d years old", age);
    printf("\nYour averge grade is %c", grade);
    printf("\nYour gpa is %2f", gpa);

    return 0;
}