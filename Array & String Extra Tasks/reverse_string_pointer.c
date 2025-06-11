#include <stdio.h>

void main() {
    char name[20];
    printf("Enter name here : ");
    scanf("%[^\n]",&name);

    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    
    char *ptr = &name[len];
        
    for (int i = len; i >= 0; i--)
    {
        printf("%c",*(ptr--));
    }
    
    
}