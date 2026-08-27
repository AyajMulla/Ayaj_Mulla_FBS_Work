#include <stdio.h>
typedef struct players
{
    char name[50];
    int no_of_matches_played;
    int runs;
    int wicket_takes;
} players;

void acceptplayer(players[], int);
void displayplayer(players[], int);
void maxruns(players[], int);
void maxwickets(players[], int);
void main(){

    players p1[10];

    acceptplayer(p1,10);
    displayplayer(p1,10);
    maxruns(p1,10);
    maxwickets(p1,10);
}

void acceptplayer(players p[], int n){
    for(int i=0;i<n;i++){
        printf("Enter player name: ");
        scanf("%s", p[i].name);
        printf("Enter no of matches played: ");
        scanf("%d", &p[i].no_of_matches_played);
        printf("Enter runs: ");
        scanf("%d", &p[i].runs);
        printf("Enter wickets taken: ");
        scanf("%d", &p[i].wicket_takes);
    }
}

void displayplayer(players p[], int n){
    for(int i=0;i<n;i++){
        printf("\n Player name: %s\n  No of matches played: %d\n  Runs: %d\n  Wickets taken: %d\n",p[i].name,p[i].no_of_matches_played,p[i].runs,p[i].wicket_takes);
    }
}

void maxruns(players p[], int n){
    int max=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(p[i].runs>max){
            
            max=p[i].runs;
            j=i;
        }
    }
    printf("\n Maximum runs scored by player %s",p[j].name);
}

void maxwickets(players p[], int n){
    int max=0;
    int max_index=0;
    for(int i=0;i<n;i++){
        if(p[i].wicket_takes>max){
            max=p[i].wicket_takes;
            max_index=i;
        }
    }
    printf("\n Maximum wickets taken by player %s",p[max_index].name);
}