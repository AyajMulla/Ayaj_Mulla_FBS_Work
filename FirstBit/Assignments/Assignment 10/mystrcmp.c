int mystrcmp(char* str1, char* str2)
{
    int i = 0;
    int cmp;

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            cmp = str1[i] - str2[i];

            return cmp;
        }

        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0')
    {
        printf("Both are equal");
        return 0;
    }

    else if(str1[i] == '\0')
    {
        printf("str2 is bigger");
        return -1;
    }

    else
    {
        printf("str1 is bigger");
        return 1;
    }
}

void main()
{
    char str1[100]="Ayaj";
	char str2[100]="Aya";

    if(mystrcmp(str1,str2)==0)
        printf("\nSame");
    else
        printf("\nDifferent");
}