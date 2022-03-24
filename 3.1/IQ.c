#include <stdio.h>

int main()
{
    float grades[] = { 2.5, 3.5, 14.5, 6.7, 8.1};

    int person;

    puts("IQ results");
    for(person=0;person<5;person++)
    {
        printf("Person #%d, %0.1f\n",person+1,grades[person]);
    }
    return(0);
}

