#include <stdio.h>
#include <stdbool.h>
int main()
{

    // logical operators = && (and) checks if two conditions are true

    float temp = 15;
    bool sunny = false;

    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("\nThe weather is good!");
    }
    else
    {
        printf("\nThe weather is bad!");
    }

    return 0;
}