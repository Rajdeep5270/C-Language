void largeSmall(int a[], int size)
{
    int big = a[0], small = a[0];
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (big < a[j])
            {
                big = a[j];
            }
            if (small > a[i])
            {
                small = a[i];
            }
            
        }
    }
    printf("\nBiggest number : %d \nSmallest Number : %d", big, small);
}