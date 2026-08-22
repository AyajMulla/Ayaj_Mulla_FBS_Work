#include <stdio.h>

int main(){

    char str[100];
    int i=0;
    
    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0')
    {
        i++;
    }
   
    char temp=str[0];
    str[0]=str[i-1];
    str[i-1]=temp;

    printf("After replacing: %s", str);

    return 0;
}