#include <stdio.h>

int main() {
 
 char op; 
 float num1, num2;
 
 printf("Enter operator (+, -, *, /, %%): ");
 scanf(" %c", &op); // Note the space before %c
 
 printf("Enter two operands: ");
 scanf("%f %f", &num1, &num2);
 
 switch (op) {
 
 case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break; // 'break' exits the switch
            
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        
        case '/':
            printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            break;

        case '%':
            
            printf("%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            break;
        
        default:
            printf("Error! Operator is not correct\n");
    }
    
    return 0;
}
