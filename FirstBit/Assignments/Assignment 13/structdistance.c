
struct distance
{
    int feet;
    float inch;
};
void main()
{
    struct distance d1;
    
    printf("Enter feet: ");
    scanf("%d", &d1.feet);

    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    if(d1.feet<0 || d1.inch<0){
        printf("Invalid distance");
        return;
    }

    printf("\n Feet: %d \n Inch: %.2f",d1.feet,d1.inch);
}   