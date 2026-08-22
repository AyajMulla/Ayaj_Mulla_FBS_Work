#include <stdio.h>
char* mystrchr(char* str, char ch)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
            return &str[i];

        i++;
    }

    return 0;
}
void main()
{
    char str[100]="Ayaj";
    char ch = 'a';

    char* result = mystrchr(str,ch);

    if(result != 0)
        printf("Character found at: %ld", result-str);
    else
        printf("Character not found");
}