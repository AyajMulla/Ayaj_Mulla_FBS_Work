struct date{
    int date;
    int month;
    int year;
};
void main(){
    struct date d1;
    
    printf("Enter date: ");
    scanf("%d", &d1.date);

    printf("Enter month: ");
    scanf("%d", &d1.month);

    printf("Enter year: ");
    scanf("%d", &d1.year);

    if(d1.date>31 || d1.month>12 || d1.year<0){
        printf("Invalid date");
        return;
    }

    printf("\n Date: %d \n Month: %d \n Year: %d",d1.date,d1.month,d1.year);

}