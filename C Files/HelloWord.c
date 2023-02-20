#include <stdio.h>

int main()
{

    // format specifier %

    // %c = char
    // %s = string || char[]
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%.2f", item1);
    printf("\nItem 2: $%.2f", item2);
    printf("\nItem 3: $%.2f", item3);

    return 0;
}