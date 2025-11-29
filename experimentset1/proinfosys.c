#include <stdio.h>

int main() {
    char name[20], manufacturer[20], category[20]; 
    int id, quantity;
    float price;
    
    printf("--- Product Data Entry ---\n");
    printf("Enter Product Name (single word): ");
    scanf("%19s", name);
    printf("Enter Product ID (integer): ");
    scanf("%d", &id);
    printf("Enter Quantity (integer): ");
    scanf("%d", &quantity);
    printf("Enter Price (float): ");
    scanf("%f", &price);
    printf("Enter Manufacturer (single word): ");
    scanf("%19s", manufacturer);
    printf("Enter Category (single word): ");
    scanf("%19s", category);
    
    printf("\n--- Product Details ---\n");
    printf("Name: %s\n", name);
    printf("ID: %d\n", id);
    printf("Quantity: %d\n", quantity);
    printf("Price: $%.2f\n", price); // .2f formats float to two decimal places
    printf("Manufacturer: %s\n", manufacturer);
    printf("Category: %s\n", category);
    
    return 0;
}