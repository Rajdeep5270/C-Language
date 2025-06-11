#include <stdio.h>

void main() {
    int num;

    printf("Enter any Number : ");
    scanf("%d",&num);

    printf("\n\nPrime Numbers : \n\n");
    for (int i = 2; i <= num; i++)
    {
        if (i % 2 != 0 || i <= 2)
        {
            printf("%d\t",i);
        }
        
    }
    
}