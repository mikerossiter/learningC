#include <stdio.h>

int main()
{
    char input[10];

    struct stuff
    {
        char c;
        int n;
    } my, his, her;

    /* Here is his info */
    his.c = 'Y';
    his.n = 199;
    her.c = 'A';
    her.n = 21;

    puts("Your Own Stuff");

    printf("Enter your favourite letter: ");
    my.c = getchar();

    printf("Enter your favourite number: ");
    scanf("%d",&my.n);

    printf("Your favourite letter is: %c\n",my.c);
    printf("And your favourite number is: %d\n",my.n);
    printf("His favourite letter is: %c\n",his.c);
    printf("And his favourite number is: %d\n",his.n);
    printf("Her favourite letter is: %c\n",her.c);
    printf("And her favourite number is: %d\n",her.n);

    return(0);
}
