#include <stdio.h>

main()
{
    char name[50];
    printf("Enter Your name here : ");
    scanf("%[^\n]", &name);

    for (int i = 0; name[i] != NULL; i++)
    {
        if (name[i] == ' ')
        {
            name[i] += 13;
        }
        else if(name[i] >= 'A' && name[i] <= 'Z') {
            name[i] += 32;
        }
    }

    printf("Snake Case String = %s",name);
}