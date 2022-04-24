#include <stdio.h>
#include <string.h>

int main()
{
    struct date {
        int month;
        int day;
        int year;
    };

    struct family {
        char name[20];
        struct date birthday;
    } me;

    strcpy(me.name,"Mike");
    me.birthday.month = 1;
    me.birthday.day = 1;
    me.birthday.year = 1982;

    printf("%s was born on %d/%d/%d\n",\
            me.name,\
            me.birthday.month,\
            me.birthday.day,\
            me.birthday.year);
    return(0);
}
