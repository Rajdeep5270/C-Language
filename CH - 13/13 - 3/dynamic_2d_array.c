// This Dynamic User Input Array 

#include <stdio.h>

main()
{
    int r_size, c_size;

    printf("\n\nEnter Rows and Columns\n\n");

    printf("Enter The Rows : ");
    scanf("%d", &r_size);

    printf("Enter The Column : ");
    scanf("%d", &c_size);

    int a[r_size][c_size];

    printf("\n\nEnter Elements of Array\n\n");

    for (int i = 0; i < r_size; i++)
    {
        for (int j = 0; j < c_size; j++)
        {
            printf("Enter Elements of Array[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nOutput of Elements of Array\n\n");

    for (int i = 0; i < r_size; i++)
    {
        for (int j = 0; j < c_size; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}