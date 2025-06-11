#include<stdio.h>

void main() {
    int size;

    printf("Enter Number : ");
    scanf("%d",&size);

    int num = 1;
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    
    
}