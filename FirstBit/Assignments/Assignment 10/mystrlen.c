int mystrlen(char* str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

void main()
{
    char str[100]="Ayaj";
    printf("Length = %d",mystrlen(str));
}