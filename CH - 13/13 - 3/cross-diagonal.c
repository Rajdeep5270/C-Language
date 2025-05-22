#include <stdio.h>

main()
{
    int row, col;

    printf("Enter Row : ");
    scanf("%d", &row);
    printf("Enter Column : ");
    scanf("%d", &col);

    int a[row][col];

    printf("\n\n Cross Diagonal Elements Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Elements Values [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n Cross Diagonal Elements Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j || i + j == row - 1)
            {
                printf("%d ", a[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}