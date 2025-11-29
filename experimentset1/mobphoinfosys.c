#include <stdio.h>

int main() {
    char brand[20], model[20], color[20];
    int serial_number, battery_capacity;
    float price;
    
    printf("--- Mobile Phone Data Entry ---\n");
    printf("Enter Brand Name (single word): ");
    scanf("%19s", brand);
    printf("Enter Model Name (single word): ");
    scanf("%19s", model);
    printf("Enter Serial Number (integer): ");
    scanf("%d", &serial_number);
    printf("Enter Price (float): ");
    scanf("%f", &price);
    printf("Enter Color (single word): ");
    scanf("%19s", color);
    printf("Enter Battery Capacity (mAh, integer): ");
    scanf("%d", &battery_capacity);
    
    printf("\n--- Mobile Phone Details ---\n");
    printf("Brand: %s\n", brand);
    printf("Model: %s\n", model);
    printf("Serial Number: %d\n", serial_number);
    printf("Price: $%.2f\n", price);
    printf("Color: %s\n", color);
    printf("Battery Capacity: %d mAh\n", battery_capacity);
    
    return 0;
}