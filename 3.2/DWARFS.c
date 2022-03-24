#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
    char dwarf[7][8] = {
        "bashful",
        "doc",
        "dopey",
        "grumpy",
        "happy",
        "sneezy",
        "sleepy",
    };
    char input[64];
    int named=0;
    int x;

    puts("See if you can name all seven dwarfs: ");

    while(named<7)
    {
        if(named==1)
            printf("\nSo far you've named %d dwarf.\n",named);
        else
            printf("\nSo far you've named %d dwarf.\n",named);

        printf("Enter a name: ");
        scanf("%s",input);

        /* Checks for no input */
        if(strcmp(input,"")==0)
            break;

        for(x=0;x<7;x++)
        {
            if(strcasecmp(input,dwarf[x])==0)
            {
                printf("Yes! %s is right.\n",input);
                named++;
            }
        }
    }
    return(0);
}
