#include <stdio.h>
#include <math.h>

int main()
{

    double A;
    double B;
    double C;

    printf("Enter side A\n>> ");
    scanf("%lf", &A);

    printf("\nEnter side B\n>> ");
    scanf("%lf", &B);

    C = sqrt(A * A + B * B);

    printf("\nSide C: %lf", C);

    return 0;
}