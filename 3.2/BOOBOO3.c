#include <stdio.h>
#include <string.h>

int main()
{
    char yours[25];
    char mine[25];

    printf("What is your name?");
    fgets(yours, 25, stdin);
    strcpy(mine,yours);
    printf("My name is %s just like yours is %s!\n",mine,yours);
    return(0);
}

