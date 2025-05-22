#include<stdio.h>

main() {
    int row , col;

    printf("Enter Row Size : ");
    scanf("%d",&row);
    printf("Enter Col Size : ");
    scanf("%d",&col);

    int a[row][col];

    printf("\n\nEnter Values of Elements\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Values of Elements [%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        printf("\n");
    }

    printf("The Sum of Array is : %d\n",sum);
    
    printf("The Average of Array is : %.2f",(float)sum / (row * col));
}