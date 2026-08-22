char* mystrcat(char* str1, char* str2)
{
    int i = 0;
    int j = 0;

    while(str1[i] != '\0')
    {
        i++;
    }

    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    return str1;
}

void main()
{
    char str1[100]="Ayaj";
	char str2[100]="Mulla";

    mystrcat(str1,str2);

    printf("Joined string = %s",str1);
}