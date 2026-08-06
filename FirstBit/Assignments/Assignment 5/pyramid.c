
void main()
{
    for(int i = 2; i <= 5; i++)
    {
       
        for(int j = 5; j >= i; j--)
        {
            printf(" ");
        }

        for(int j = 2; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
}