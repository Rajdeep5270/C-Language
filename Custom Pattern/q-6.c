// Dyanmic pattern Program 
#include<stdio.h>

main() {
    int n;
    printf("Enter Pattern Size : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int s = n; s > i; s--)
        {
            printf("  ");
        }
        
        for (int j = i; j >= 1; j--)
        {
            printf("%d ",j);
        }
        
        for (int j = 2; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}