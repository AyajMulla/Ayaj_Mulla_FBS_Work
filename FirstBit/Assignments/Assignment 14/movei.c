#include<stdio.h>
#include<string.h>

struct movie
{
    char title[50];
    char director[50];
    int year;
    char genre[30];
};

void addMovie(struct movie m[], int n);
void displayMovie(struct movie m[], int n);
void searchMovie(struct movie m[], int n);
void updateMovie(struct movie m[], int n);

void main()
{
    struct movie m[2];
    int choice;

    while(1)
    {
        
        printf("Enter 1 to Add Movie\n");
        printf("Enter 2 to Display Movies\n");
        printf("Enter 3 to Search Movie\n");
        printf("Enter 4 to Update Movie\n");
        printf("Enter 5 to Exit\n");
       

        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                addMovie(m,2);
                break;
            case 2:
                displayMovie(m,2);
                break;
            case 3:
                searchMovie(m,2);
                break;
            case 4:
                updateMovie(m,2);
                break;
            case 5:
                return;
            default:
                printf("\nInvalid choice");
        }
    }
}

void addMovie(struct movie m[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\nEnter movie %d details",i+1);

        printf("\nEnter title: ");
        scanf("%s",m[i].title);

        printf("Enter director: ");
        scanf("%s",m[i].director);

        printf("Enter release year: ");
        scanf("%d",&m[i].year);

        printf("Enter genre: ");
        scanf("%s",m[i].genre);
    }
}

void displayMovie(struct movie m[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("\n\nMovie %d",i+1);

        printf("\nTitle: %s",m[i].title);
        printf("\nDirector: %s",m[i].director);
        printf("\nRelease Year: %d",m[i].year);
        printf("\nGenre: %s",m[i].genre);
    }
}

void searchMovie(struct movie m[], int n)
{
    char title[50];

    printf("\nEnter title to search: ");
    scanf("%s",title);

    for(int i=0;i<n;i++)
    {
        if(strcmp(m[i].title,title)==0)
        {
            printf("\nMovie Found");
            printf("\nTitle: %s",m[i].title);
            printf("\nDirector: %s",m[i].director);
            printf("\nRelease Year: %d",m[i].year);
            printf("\nGenre: %s",m[i].genre);

            return;
        }
    }

    printf("\nMovie not found");
}

void updateMovie(struct movie m[], int n)
{
    char title[50];

    printf("\nEnter title to update: ");
    scanf("%s",title);

    for(int i=0;i<n;i++)
    {
        if(strcmp(m[i].title,title)==0)
        {
            printf("\nEnter new director: ");
            scanf("%s",m[i].director);

            printf("Enter new release year: ");
            scanf("%d",&m[i].year);

            printf("Enter new genre: ");
            scanf("%s",m[i].genre);

            printf("\nMovie updated successfully");

            return;
        }
    }

    printf("\nMovie not found");
}