#include <stdio.h>

int main() {
    char operator;
    float operand1, operand2;
    char continueprogram = 'y';
    while (continueprogram == 'y' || continueprogram == 'Y') {
    printf("Which operator would you like to use? +, -, *, /\n");
    scanf("%c", &operator);
    printf("Which two operands would you like to use?\n");
    scanf("%f %f", &operand1, &operand2);

    switch (operator) {
        case '+':
        printf("The addition is: %f\n", operand1 + operand2);
        break;
        case '-':
        printf("The subtraction is: %f\n", operand1 - operand2);
        break;
        case '*':
        printf("The multiplication is: %f\n", operand1 * operand2);
        break;
        case '/':
        printf("The division is: %f\n", operand1 / operand2);
        break;
        default:
        printf("Invalid operator\n");
        break;
    }
    printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &continueprogram);
        while (getchar() != '\n'); 
    }

    return 0;
}