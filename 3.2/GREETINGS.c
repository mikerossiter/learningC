#include <stdio.h>

int main()
{
    char prompt[] = "Please enter your first name:";
    char gratis[] = "Thanks!";
    char first[25];

    printf("%s\n",prompt);
    fgets(first, sizeof(first), stdin);
    puts(gratis);
    printf("Pleased to meet you, %s\n",first);
    return(0);
}

