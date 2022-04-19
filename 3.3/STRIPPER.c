#include <stdio.h>
#include <ctype.h>

int main()
{
    char input[128];
    int x = 0;

    printf("Enter some text: ");
    fgets(input,128,stdin);

    /* Scan the text */
    while(input[x])
    {
        if(isalnum(input[x]))
            input[x] = tolower(input[x]);
        else
            input[x] = '*';
        x++;
    }
    puts(input);
    return(0);
}
