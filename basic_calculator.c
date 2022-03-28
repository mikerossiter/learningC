#include <stdio.h>

int main()
{
    int int1,int2,op;

    printf("Enter your first number: ");
    scanf("%d",&int1);

    printf("Enter your second number: ");
    scanf("%d",&int2);

    printf("Choose an operator (Select 1 for addition, 2 for subtraction, 3 for division and 4 for multiplication): ");
    scanf("%d",&op);

    switch(op)
    {
        case 1:
            printf("%d + %d = %d\n",int1,int2,int1+int2);
            break;
        case 2:
            printf("%d - %d = %d\n",int1,int2,int1-int2);
            break;
        case 3:
            printf("%d / %d = %d\n",int1,int2,int1/int2);
            break;
        case 4:
            printf("%d * %d = %d\n",int1,int2,int1*int2);
            break;
        default:
            printf("That is not an operator.");
            break;
    }
    return(0);
}
