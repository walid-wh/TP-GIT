#include <stdio.h>

int main() {
    double num1 = 10.5;
    double num2 = 5.0;
    char operator = '+'; 
    
    printf("Simple Calculator with Initial Values\n");
    printf("-------------------------------------\n");
    printf("First number: %.2lf\n", num1);
    printf("Operator: %c\n", operator);
    printf("Second number: %.2lf\n", num2);

    // Perform operation
    switch (operator) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}