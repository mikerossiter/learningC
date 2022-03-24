#include <stdio.h>
#include <string.h>

int main()
{
    char command[64];
    char response[] = "You think I know how to ";
    char new[123];

    while(strcasecmp(command,"quit\n"))
    {
        printf("C:\\>");
        fgets(command, 64, stdin);

        strcpy(new,response);
        strcat(new,command);
        puts(new);
    }
    puts("Well, maybe I do...");
    return(0);
}

