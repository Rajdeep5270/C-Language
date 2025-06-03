#include<stdio.h>

main() {
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s < i; s++)
        {
            printf("  ");
        }

        for (int j = i; j <= 5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }

    for (int i = 4; i >= 1; i--)
    {
        for (int s = 1; s < i; s++)
        {
            printf("  ");
        }

        for (int j = i; j <= 5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
    
}