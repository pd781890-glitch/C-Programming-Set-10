#include <stdio.h>

int main() {
    char title[20], author[20], publisher[20];
    int isbn, year;
    float price;
    
    printf("--- Book Data Entry ---\n");
    printf("Enter Book Title (single word): ");
    scanf("%19s", title);
    printf("Enter Author Name (single word): ");
    scanf("%19s", author);
    printf("Enter ISBN (integer): ");
    scanf("%d", &isbn);
    printf("Enter Price (float): ");
    scanf("%f", &price);
    printf("Enter Publisher (single word): ");
    scanf("%19s", publisher);
    printf("Enter Year of Publication (integer): ");
    scanf("%d", &year);
    
    printf("\n--- Book Details ---\n");
    printf("Title: %s\n", title);
    printf("Author: %s\n", author);
    printf("ISBN: %d\n", isbn);
    printf("Price: $%.2f\n", price);
    printf("Publisher: %s\n", publisher);
    printf("Year: %d\n", year);
    
    return 0;
}