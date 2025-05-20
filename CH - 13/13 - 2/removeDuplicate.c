#include <stdio.h>

int main()
{
    int size;
    printf("Enter the number of Elements : ");
    scanf("%d", &size);

    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the values of Array[%d] : ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        int isDuplicate = 0;

        for (int k = 0; k < i; k++)
        {
            if (a[i] == a[k])
            {
                isDuplicate = 1;
                break;
            }
        }

        if (!isDuplicate)
        {
            printf("%d\t", a[i]);
        }
    }
}