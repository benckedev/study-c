#include <stdio.h>

int main()
{

    int age;

    printf("\nEnter your age\n>> ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\nYou are now signed up!");
    }
    else if (age == 0)
    {
        printf("You can't sign up! You were just born!");
    }
    else if (age < 0)
    {
        printf("You haven't been born yet!");
    }
    else
    {
        printf("\nYou are too young to sign up!");
    }

    return 0;
}