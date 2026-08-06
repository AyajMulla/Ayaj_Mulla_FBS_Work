
void main()
{
    for(int i = 1; i <= 5; i++)
    {
       
        for(int space = 1; space <= i; space++)
        {
            printf(" ");
        }

        for(int j = 5; j >= i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }
}