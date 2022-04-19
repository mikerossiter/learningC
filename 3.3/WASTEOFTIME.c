#include <stdio.h>
#include <ctype.h>

int main()
{
    char address[128];
    int x,num;

    printf("Enter your address: ");
    fgets(address,128,stdin);

    while(address[x])
    {
        if(isdigit(address[x]))
                num++;
        x++;
    }
    printf("Your address contains %d numbers!",num);
    return(0);
}

