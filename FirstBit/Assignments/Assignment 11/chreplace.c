void main()
{
    char str[100];

    printf("Enter string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a')
        {
            str[i] = '$';
        }
    }

    printf("After replacing: %s", str);
}