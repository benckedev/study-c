#include <stdio.h>
#include <string.h>

int main()
{

    char name[25]; // bytes
    int age;

    printf("Whats's your name?\n>> ");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("How old are you?\n>> ");
    scanf("%d", &age);

    printf("  Hello %s", name);
    printf("\n  You are %d years old", age);

    return 0;
}