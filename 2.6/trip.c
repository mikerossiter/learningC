#include <stdio.h>

int main()
{
    char c;

    puts("Available packages:");
    puts("A - Transportation, Hotel and Meals.");
    puts("B - Transportation and Hotel.");
    puts("C - Transportation only.");
    printf("Select your package: ");
    c = getchar();

    switch(c)
    {
        case 'A':
        case 'a':
            puts("You get the meals and");
        case 'B':
        case 'b':
            puts("You get the hotel and");
        case 'C':
        case 'c':
            puts("You get transportation.");
            break;
        default:
            puts("You don't get nuthin!");
    }
    return(0);
}

