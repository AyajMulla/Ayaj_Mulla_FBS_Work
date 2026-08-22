void main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int j = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(i % 2 == 0)
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("After deleting odd indexes: %s", str);
}