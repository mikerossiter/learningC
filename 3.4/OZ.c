#include <stdio.h>

#define LINE_LENGTH 40

int main()
{
    char actor1[] = "Judy Garland";
    int age1 = 17;
    char role1[] = "Dorothy";
    
    char actor2[] = "Ray Bolger";
    int age2 = 35;
    char role2[] = "Scarecrow";
    
    char actor3[] = "Bert Lahr";
    int age3 = 44;
    char role3[] = "Cowardly Lion";
    
    char actor4[] = "Jack Haley";
    int age4 = 40;
    char role4[] = "Tin Woodsman";
    
    
    char actor5[] = "Margaret Hamilton";
    int age5 = 37;
    char role5[] = "Wicked Witch";
    
    char actor6[] = "Frank Morgan";
    int age6 = 49;
    char role6[] = "The Wizard";
    
    int line;
    
    puts("Wizard of Oz Database!\n");

    /* draw the table heading */
    printf("%-20s %3s   %-20s\n","Actor","Age","Role");
    for(line=0;line<LINE_LENGTH;line++) putchar('-');
    putchar('\n');

    /* display the data */
    printf("%-20s %3d   %-20s\n",actor1,age1,role1);
    printf("%-20s %3d   %-20s\n",actor2,age2,role2);
    printf("%-20s %3d   %-20s\n",actor3,age3,role3);
    printf("%-20s %3d   %-20s\n",actor4,age4,role4);
    printf("%-20s %3d   %-20s\n",actor5,age5,role5);
    printf("%-20s %3d   %-20s\n",actor6,age6,role6);
    return(0);
}
