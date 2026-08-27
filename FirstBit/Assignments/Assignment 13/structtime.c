
struct time{
    int hour;
    int min;
    int sec;
};
void main(){
    struct time t1;
    
    printf("Enter hour: ");
    scanf("%d", &t1.hour);

    printf("Enter min: ");
    scanf("%d", &t1.min);

    printf("Enter sec: ");
    scanf("%d", &t1.sec);

    if(t1.hour>24 || t1.min>60 || t1.sec>60){
        printf("Invalid time");
        return;
    }

    printf("\n Hour: %d \n Min: %d \n Sec: %d",t1.hour,t1.min,t1.sec);

}