#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 100

int main()
{
    int r[COUNT];
    int c;

    srandom((unsigned)time(NULL));

    for(c=0;c<COUNT;c++)
        r[c] = random() % 100 + 1;

    puts("100 Random Numbers:");
    for(c=0;c<COUNT;c++)
        printf("%d\t",r[c]);

    putchar('\n');
    
    for(c=0;c<COUNT;c++)
        r[c] = random() % 100 + 1;

    puts("100 NEW Random numbers:");

    for(c=0;c<COUNT;c++)
        printf("%d\t",r[c]);

    putchar('\n');
    return(0);
}

