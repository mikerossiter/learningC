#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RANGE 50
#define BALLS 6

int main()
{
    int numbers[RANGE];
    int c,ball;

    puts("L O T T O  P I C K E R\n");

    srandom((unsigned)time(NULL));

    for(c=0;c<RANGE;c++)
        numbers[c]=0;

    printf("Press enter to pick this week's numbers:");
    getchar();

    puts("Here they come:");
    for(c=0;c<BALLS;c++)
    {
        do
        {
            ball = random() % RANGE;
        }
        while(numbers[ball]);

        numbers[ball] = 1;

        printf("%2d ",ball+1);
    }

    printf("\n\nGood luck in the draw!\n");
    return(0);
}

