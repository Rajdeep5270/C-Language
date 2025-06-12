#include <stdio.h>

void main() {
    FILE *fp;
    FILE *fp1;

    fp = fopen("read_q_1.txt","r");
    fp1 = fopen("demo.txt","w");

    if (fp != '\0')
    {
        char msg[100];

        fscanf(fp, "%[^\b]",&msg);

        fprintf(fp1, "%s", msg);

        fclose(fp);
        fclose(fp1);

        printf("Data Copeid to Another file Successfully...");
    }
    else{
        printf("File is Not opened...");
    }
    
}