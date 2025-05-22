#include <stdio.h>

main()
{
    int row, col;

    printf("Enter Row Size : ");
    scanf("%d", &row);
    printf("Enter Column Size : ");
    scanf("%d", &col);

    int array[row][col];
    printf("\n\nEnter Elements Values\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter The Values of Elements [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    printf("\n\nDiagonal Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                printf("%d ",array[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}