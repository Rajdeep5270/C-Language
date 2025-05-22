// static target sum solving
// example 1 
#include<stdio.h>

main() {
    int target = 9;
    int sum = 0;

    int a[] = {2, 7, 22, 5};

    for(int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++)
        {
            sum = a[i] + a[j];
            if(sum == target) {
                printf("[%d , %d]", i , j);
            }    
        }
        printf("\n");
    }
}