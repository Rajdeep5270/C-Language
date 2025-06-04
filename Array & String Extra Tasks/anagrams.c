#include<stdio.h>

void main() {
    char name[20];
    printf("Enter String to Check Anagram : ");
    scanf("%[^\n]",&name);

    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    printf("%d",len);
}