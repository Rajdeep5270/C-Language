#include <stdio.h>

main()
{
    for (int i = 5; i >= 1; i--)
    {
        for (int s = 5; s > i; s--)
        {
            printf(" ");
        }
        
        for (int j = i; j >= 1; j--)
        {
            (j % 2 == 0) 
            ? printf("0") 
            : printf("1");
        }
        printf("\n");
    }
}