#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int row, col;
    printf("Enter Row Size : ");
    scanf("%d", &row);

    printf("Enter Column Size : ");
    scanf("%d", &col);

    int a[row][col];
    srand(time(0));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = rand() % 99;
        }
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
                printf("%d", a[i][j]);
            }
            if (i + j == row - 1 && i != j)
            {
                sum += a[i][j];
                printf("%d", a[i][j]);
            }

            printf("    ");
        }
        printf("\n");
    }

    printf("The sum of Left Diagonal \t: %d\n",sum);

}