#include <stdio.h>

main()
{
    int row, col;

    printf("Enter Row : ");
    scanf("%d", &row);
    printf("Enter Column : ");
    scanf("%d", &col);

    int a[row][col];
    printf("\n\nInput Elements\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter Elements of Array[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    printf("\n\nOutput of Elements\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
                printf("%d ", a[i][j]);
            }
            printf("  ");
        }
        printf("\n");
    }

    printf("\n\nSum of Diagonal\n\n");
    printf("The sum of Diagonal = %d",sum);
}