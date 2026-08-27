#include<stdio.h>
struct time{
    int hour;
    int min;
    int sec;
};
struct time calculatetime(struct time);
void displaytime(struct time);
void main(){
    struct time t1;

    printf("Enter hour,time and minutes: ");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
    displaytime(t1);
    t1=calculatetime(t1);
    displaytime(t1);
}

struct time calculatetime(struct time t){
    int tsec=t.hour*3600+t.min*60+t.sec;
    t.hour=tsec/3600;
    t.min=(tsec%3600)/60;
    t.sec=(tsec%3600)%60;
    return t;

}
void displaytime(struct time t){
    printf("\n Hour: %d  Min: %d  Sec: %d",t.hour,t.min,t.sec);
}