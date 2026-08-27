struct product{
    int id;
    char name[20];
    int quantity;
    float price;
};
void store(struct product *p);
void display(struct product *p);
void main(){
    struct product p1;
    store(&p1);
    display(&p1);
}
void store(struct product *p){
    printf("Enter product id: ");
    scanf("%d", &p->id);
    printf("Enter product name: ");
    scanf("%s", p->name);
    printf("Enter product quantity: ");
    scanf("%d", &p->quantity);
    printf("Enter product price: ");
    scanf("%f", &p->price);
}
void display(struct product *p){
    printf("\n Product id: %d \n Product name: %s \n Product quantity: %d \n Product price: %.2f", p->id, p->name, p->quantity, p->price);
}
