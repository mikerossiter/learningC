#include <stdio.h>
#include <math.h>

int main()
{
    int num, i = 2, count = 0;
    printf("Enter the number: ");
    scanf("%d",&num);
    
    while(i <= sqrt(num))
    {
        if(num % i == 0)
        {
            count = 1;
            break;
        }
        i++;
    }
    if(count == 0)
    {
        printf("Entered number is prime\n");
    }
    else
    {
        printf("Entered number is not prime\n");
    }
    return 0;
}
