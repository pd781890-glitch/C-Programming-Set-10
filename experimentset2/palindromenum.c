
#include <stdio.h>

int main() {
    
    int n, reversed_n = 0, remainder, original_n;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    original_n = n; 
    while (n != 0) {
        remainder = n % 10;
        reversed_n = reversed_n * 10 + remainder;
        n = n / 10;
    }
    
    if (original_n == reversed_n) {
        printf("%d is a palindrome.\n", original_n);
    } else {
        printf("%d is not a palindrome.\n", original_n);
    }
    
    return 0;
}
