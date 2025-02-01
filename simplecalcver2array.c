#include <stdio.h>

int main() {
    char operator;
    int i, n;
    char continueprogram = 'y';
    while (continueprogram == 'y' || continueprogram == 'Y') {
    int sum = 0, subtraction = 0, multiplication = 1;
    float division = 1.0;
    printf("Which operator would you like to use? +, -, *, /\n");
    scanf(" %c", &operator);
    printf("How many operands are you going to use?\n");
    scanf("%d", &i);
    int operands[i];
    printf("Enter %d elements:\n", i);
        for (n = 0; n < i; n++) {
            scanf("%d", &operands[n]);
        }
    switch (operator) {
        case '+':
                for (n = 0; n < i; n++) {
                    sum += operands[n];
                }
                printf("The sum of the given numbers is: %d\n", sum);
                break;
            case '-':
                subtraction = operands[0];
                for (n = 1; n < i; n++) {
                    subtraction -= operands[n];
                }
                printf("The subtraction of the given numbers is: %d\n", subtraction);
                break;
            case '*':
                for (n = 0; n < i; n++) {
                    multiplication *= operands[n];
                }
                printf("The multiplication of the given numbers is: %d\n", multiplication);
                break;
            case '/':
                division = (float)operands[0];
                for (n = 1; n < i; n++) {
                    division /= operands[n];
                }
                printf("The division of the given numbers is: %.2f\n", division);
                break;
            default:
                printf("Invalid operator\n");
                break;
        }

        printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &continueprogram);
        while (getchar() != '\n'); // Clear input buffer
    }

    return 0;
}