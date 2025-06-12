#include<stdio.h>

void main() {

    FILE *fp;

    fp = fopen("que_2.txt","w");

    if (fp != NULL)
    {
        int a = 50;
        fprintf(fp,"Numbers That are Divisible by 3 & 5\n\n");
        for (int i = 1; i <= a; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                fprintf(fp, "%d\t", i);
            }
        }
        printf("Output Generated Successfully. You can check que_2.txt file.");
    }
    else {
        printf("File is Not open...");
    }
    
}