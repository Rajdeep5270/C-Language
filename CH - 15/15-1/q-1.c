// lowercase to uppercase program in c

#include<stdio.h>

main() {
    char str[20];
    printf("Enter Your name : ");
    scanf("%[^\n]",&str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -=32;
        
    }

    printf("%s",str);
    
}