#include <stdio.h>
struct book
{
    char b_name[50];
    int b_id;
    char author[50];
    float price;
};
struct book bookdetails(struct book);
struct book displaybook(struct book);

void main(){
    struct book b1;

    b1=bookdetails(b1);
    displaybook(b1);

}

struct book bookdetails(struct book b){
    printf("Enter book name, id, author and price: ");
    scanf("%s %d %s %f", b.b_name, &b.b_id, b.author, &b.price);
    return b;
}

struct book displaybook(struct book b){
    printf("\n Book name: %s  Book id: %d  Author: %s  Price: %f",b.b_name,b.b_id,b.author,b.price);
    return b;
}