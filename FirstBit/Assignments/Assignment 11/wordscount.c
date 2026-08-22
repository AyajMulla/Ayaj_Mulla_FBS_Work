#include <stdio.h>

int main(){

    char str[100];
    int i=0;
    int count=0;
    
    printf("Enter a string: ");
    fgets(str, 100 , stdin);

    while(str[i] != '\0')
    {

        if(str[i] ==' ')
        {
            count++;
        }
        i++;
    }
    printf("Number of words: %d", count+1);
}