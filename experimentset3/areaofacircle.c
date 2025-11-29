#include <stdio.h>

#define PI 3.14159
float calculateArea(float r) {
    
    float area = PI * r * r;
    
    return area;
}

int main() {
    
    float radius, result;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
   
    result = calculateArea(radius);
    
    printf("The area of the circle is: %.2f\n", result);
    
    return 0;
}
