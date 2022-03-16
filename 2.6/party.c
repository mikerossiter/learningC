#include <stdio.h>

int main()
{
    char c;

    puts("Please vote for your political party:");
    puts("A - Green Party");
    puts("B - Liberal Democrats");
    puts("C - Labour");
    printf("Select your party: ");
    c = getchar();

    switch(c)
    {
        case 'A':
        case 'a':
            puts("You have selected the Green Party.");
            break;
        case 'B':
        case 'b':
            puts("You have selected the Liberal Democrats.");
            break;
        case 'C':
        case 'c':
            puts("You have selected the Labour party.");
            break;
        default:
            puts("You didn't vote for anyone you wally!");
    }
    return(0);
}

