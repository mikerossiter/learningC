#include <stdio.h>

#define LINE_LENGTH 40

int main()
{
    struct oz {
        char actor[18];
        int age;
        char role[16];
    };

    struct oz cast[6] = {
        "Judy Garland", 17, "Dorothy",
        "Ray Bolger", 35, "Scarecrow",
        "Bert Lahr", 44, "Cowardly Lion",
        "Jack Haley", 40, "Tin Woodsman",
        "Margaret Hamilton", 37, "Wicked Witch",
        "Frank Morgan", 49, "The Wizard"
    };
    struct oz temp;
    int line,x,a,b;

    /* Swap Margaret and Frank 
    temp = cast[4];
    cast[4] = cast[5];
    cast[5] = temp;*/

    /* Sort the list by age */
    for(a=0;a<6-1;a++)
        for(b=a+1;b<6;b++)
            if(cast[a].age > cast[b].age)
            {
                temp = cast[a];
                cast[a] = cast[b];
                cast[b] = temp;
            }

    puts("Wizard of Oz Database!\n");

    /* draw the table heading */
    printf("%-18s\t%3s\t%-15s\n","Actor","Age","Role");
    for(line=0;line<LINE_LENGTH;line++) putchar('-');
    putchar('\n');

    /* display the data */
    for(x=0;x<6;x++)
        printf("%-18s\t%3d\t%-15s\n",
                cast[x].actor,\
                cast[x].age,\
                cast[x].role);
    return(0);
}
