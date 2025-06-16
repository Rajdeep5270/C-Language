#include <stdio.h>

void main()
{
    char str[50];

    printf("Enter a String : ");
    scanf("%[^\n]", &str);

    int count = 0;
    char vowel;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            count++;
            printf("%c = %d\n", str[i], count);
        }
        count = 0;

    }
}