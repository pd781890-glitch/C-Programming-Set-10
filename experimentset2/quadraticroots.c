#include <stdio.h>   
#include <math.h>   

int main() {
    double a, b, c;         
    double D;               
    double root1, root2;   
    double realPart, imagPart; 

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    
    D = b*b - 4*a*c;

   
    if (D > 0) {
        
        root1 = (-b + sqrt(D)) / (2*a);
        root2 = (-b - sqrt(D)) / (2*a);
        printf("Two distinct real roots: %.2lf and %.2lf\n", root1, root2);
    }
    else if (D == 0) {
       
        root1 = -b / (2*a);
        printf("One real repeated root: %.2lf\n", root1);
    }
    else {
  
        realPart = -b / (2*a);
        imagPart = sqrt(-D) / (2*a);
        printf("Two complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n",
               realPart, imagPart, realPart, imagPart);
    }

   
    return 0;
}