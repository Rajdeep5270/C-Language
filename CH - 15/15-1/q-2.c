#include<stdio.h>

main() {
    char name[20];
    printf("Enter Your name : ");
    scanf("%[^\n]",&name);

    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    
    printf("Length = %d",length);
}