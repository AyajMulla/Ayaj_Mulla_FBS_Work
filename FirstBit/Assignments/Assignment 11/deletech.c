void main(){

    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int ind;
    printf("Enter index you want to delete:\n", ind);
    scanf("%d", &ind);

    for(int i=ind; str[i]!='\0';i++){
        str[i]=str[i+1];
    }
    printf("After deleting: %s", str);
}
