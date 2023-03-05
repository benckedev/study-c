#include <stdio.h>

int main()
{

    // switch = a more efficient alternative to using many "else if" statements
    // allows a value to be tested for equality against many case

    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("\nperfect!(%c)", grade);
        break;
    case 'B':
        printf("\nYou did good! (%c)", grade);
        break;
    case 'C':
        printf("\nYou did okay! (%c)", grade);
        break;
    case 'D':
        printf("\nAt least it's not an F! (%c)", grade);
        break;
    case 'F':
        printf("\nYOU FAILED(%c)", grade);
        break;
    default:
        printf("\nPlease enter only valid grade.");
    }

    return 0;
}