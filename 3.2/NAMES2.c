#include <stdio.h>

int main()
{
    char names[4][3][10] = {
        "Bob",    "Bill",    "Bret",
        "Dan",    "Dave",    "Don",
        "George", "Harry",   "John",
        "Mike",   "Steve",   "Vern"
    };
    int a,b;
/* Change order of output */
    for(a=0;a<3;a++)
        for(b=0;b<4;b++)
            printf("%s\n",names[b][a]);
    return(0);
}
