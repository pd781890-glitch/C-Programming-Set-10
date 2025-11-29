#include <stdio.h>

int main() {
    int number, original_number, digit, sum = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    original_number = number;
    
    // Loop continues as long as there are digits left in 'number'
    while (number != 0) {
        digit = number % 10; // Get the last digit
        sum += digit;        // Add it to the total sum
        number /= 10;        // Remove the last digit
    }
    
    printf("The sum of digits of %d is: %d\n", original_number, sum);
    
    return 0;
}