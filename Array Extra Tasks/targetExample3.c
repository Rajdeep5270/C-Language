#include<stdio.h>

main() {
    int target = 6;
    int nums[] = {3, 3};

    int sum = 0;

    for(int i = 0; i < 2; i++) {
        for (int  j = i + 1; j < 2; j++)
        {
            sum = nums[i] + nums[j];
            if(sum == target) {
                printf("[%d , %d]", i , j);
            }
        }
        printf("\n");
    }
}