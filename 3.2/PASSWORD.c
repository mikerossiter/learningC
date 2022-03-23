#include <stdio.h>
#include <string.h>

int main()
{
    char string[16];
    char password[] = "please\n";

    printf("Enter your secret password:");
    fgets(string, 16, stdin);

    if(!strcmp(string,password))
        puts("Entry granted!");
    else
        puts("Sorry, wrong password,");
    return(0);
}
