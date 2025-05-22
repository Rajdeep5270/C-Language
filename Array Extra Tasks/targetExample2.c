#include<stdio.h>

main() {
    int target = 6;
    int nums[] = {3, 2, 4};

    int sum = 0;

    for(int i = 0; i < 3; i++) {
        for (int  j = i + 1; j < 3; j++)
        {
            sum = nums[i] + nums[j];
            if(sum == target) {
                printf("[%d , %d]", i , j);
            }
        }
        printf("\n");
    }
}