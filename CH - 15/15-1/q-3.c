// upper case to lowercase converter
#include<stdio.h>

main() {
    char str[50];
    printf("Enter Your name here : ");
    scanf("%[^\n]",&str);

    for (int i = 0; str[i] != NULL; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        
    }
    printf("%s",str);
}