#include <stdio.h>

int main()
{
    char phrase[] = "sushi is mooshi";
    char ch;
    int x = 0;

    puts(phrase);
    while(ch = phrase[x])
    {
        if(ch == ' ')
            phrase[x] = '-';
        x++;
    }
    puts(phrase);
    return(0);
}
