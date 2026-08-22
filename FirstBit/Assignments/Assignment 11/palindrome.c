#include <stdio.h>


void main()
{
    char str[100];
    int i, len = 0;
    int status = 1;

    printf("Enter string: ");
    scanf("%s", str);

    while(str[len] != '\0')
    {
        len++;
    }

    for(i = 0; i < len / 2; i++)
    {
        if(str[i] == str[len - 1 - i])
        {
            status = 1;
        }
        else
        {
            status = 0;
            break;
        }
    }

    if(status == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}