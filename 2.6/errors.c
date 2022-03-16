#include <stdio.h>

int main()
{

    int code;

    printf("Enter the error code number\n");
    printf("Range 1 through 5: ");
    scanf("%d",&code);

    switch(code)
    {
        case 1:
            puts("San Andreas Fault");
            puts("Solution: Move your house.");
            break;
        case 2:  
            puts("Illegal operation");
            puts("Solution: Find another doctor.");
            break;
        case 3:
            puts("Bad filename");
            puts("Solution: Put it to bed without any supper.");
            break;
        case 4:
            puts("Missing socket");
            puts("Solution: Look in the dryer.");
            break;
        case 5:
            puts("Divide by zero");
            puts("Solution: Mess with the numbers until it works.");
            break;
        default:
            puts("Error code value out of range");
            puts("Solution: Read the directions next time.");
    }
    return(0);
}
