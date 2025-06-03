#include<stdio.h>

main() {
    char str[20];
    printf("Enter Mix of String , and Number : ");
    scanf("%[^\n]",&str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            printf("Numbers = %c\n",str[i]);
        }
        else if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("Vowels = %c\n",str[i]);
        }
        else if(!(
            str[i] >= 'a' && str[i] <= 'z' ||
            str[i] >= '0' && str[i] <= '9' ||
            str[i] >= 'A' && str[i] <= 'Z' ||
            str[i] == ' '
        )) {
            printf("Special characters = %c\n",str[i]);
        }
        else{
            printf("Consonants Are = %c\n",str[i]);
        }
    }
    
}