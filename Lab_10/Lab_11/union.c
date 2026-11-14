#include <stdio.h>

union Item {
    int id;
    float price;
};

int main() {
    
    union Item book;

    book.id = 105;
    printf("Book ID: %d\n", book.id);

    book.price = 299.50;
    printf("Book Price: %.2f\n", book.price);

    return 0;
}
