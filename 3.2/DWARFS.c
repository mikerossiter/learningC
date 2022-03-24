#include <stdio.h>
#include <string.h>
#include <strings.h>

int main()
{
    char dwarf[7][2][8] = {
        "bashful", "?",
        "doc",     "?",
        "dopey",   "?",
        "grumpy",  "?",
        "happy",   "?",
        "sneezy",  "?",
        "sleepy",  "?"
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
            if(strcmp(input,dwarf[x][0])==0)
                if(dwarf[x][1][0]=='!')
                    printf("You already named that dwarf!\n");
                else
                {
                    printf("Yes! That is right!\n");
                    named++;
                    dwarf[x][1][0]='!';
                }
            }
        }
        return(0);
}
