#include <stdio.h>

#define pf printf
#define sf scanf

main()
{
    int row, col;

    pf("Enter Row : ");
    sf("%d", &row);
    pf("Enter Column : ");
    sf("%d", &col);

    int a[row][col];
    pf("\n\nElements Values Input\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            pf("Enter Elements of Array [%d][%d] : ", i , j);
            sf("%d",&a[i][j]);
        }
        pf("\n");
    }
    
    pf("\n\nAnti - Diagonal Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == col - 1)
            {
                pf("%d ",a[i][j]);
            }
            else{
                pf("  ");
            }
        }
        pf("\n");
    }
    
}