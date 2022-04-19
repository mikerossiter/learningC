#include <stdio.h>

int main()
{
    char input[10];

    struct stuff
    {
        char letter;
        int number;
    };

    struct stuff my;

    puts("Your Own Stuff");

    printf("Enter your favourite letter: ");
    my.letter = getchar();

    printf("Enter your favourite number: ");
    scanf("%d",&my.number);

    printf("Your favourite letter is: %c\n",my.letter);
    printf("And your favourite number is: %d\n",my.number);
    return(0);
}
