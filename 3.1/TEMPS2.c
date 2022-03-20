#include <stdio.h>

int main()
{
    float temps[5];
    float total,average;
    int c;

    for(c=0;c<5;c++)
    {
        printf("Input the temperature for day %d: ",c+1);
        scanf("%f",&temps[c]);
    }

    total =0.0;
    printf("Temperatures for the page %d days:\n",5);

    for(c=0;c<5;c++)
    {
        printf("Day %d, %5.1f\n",c+1,temps[c]);
        total += temps[c];
    }

    average = total/(float)5;
    printf("The average temperature was %5.1f\n",average);
    return(0);
}

