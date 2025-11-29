#include <stdio.h>

int main() {
    
    int arr[100];
    int n, i, numToFind, count = 0;
    
    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to find: ");
    scanf("%d", &numToFind);
    
    
    for (i = 0; i < n; i++) {
        
        
        if (arr[i] == numToFind) {
            count++;
        }
    }
    
    printf("The number %d appears %d time(s) in the array.\n", numToFind, count);
    
    return 0;
}
