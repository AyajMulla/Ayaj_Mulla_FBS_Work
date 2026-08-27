#include<stdio.h>

struct pointofsale{
    char name[20];
    int quantity;
    float price;
};
void additem(struct pointofsale p[], int n);
void displayitem(struct pointofsale p[], int n);
void calculateitem(struct pointofsale p[], int n);
void main(){
    struct pointofsale p1[2];
    int choice;
      
    while(1){
    printf("Enter your choice: \n 1. Add Item \n 2. Display item \n 3. Calculate item \n 4.Exit \n");
    scanf("%d",&choice);
   switch(choice){
        case 1:
            additem(p1,2);
            break;
        case 2:
            displayitem(p1,2);
            break;
        case 3:
            calculateitem(p1,2);
            break;
        case 4:
            return;
        default:
            printf("Invalid choice");
    }
    }
}

void additem(struct pointofsale p[], int n){
    for(int i=0;i<n;i++){
        printf("Enter item name, quantity and price: ");
        scanf("%s %d %f", p[i].name, &p[i].quantity, &p[i].price);
    }
}

void displayitem(struct pointofsale p[], int n){
    for(int i=0;i<n;i++){
        printf("\n Item name: %s  Quantity: %d  Price: %f",p[i].name,p[i].quantity,p[i].price);
    }
}

void calculateitem(struct pointofsale p[], int n){
    for(int i=0;i<n;i++){
        float total=p[i].quantity* p[i].price;
        printf("\n Total price: %f",total);
    }
}
