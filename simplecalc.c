#include <stdio.h>

int num1;
int num2;

int main() {
    int functiontype;
    char continue_program = 'y';

   while (continue_program == 'y' || continue_program == 'Y') {
    printf("Please specify what function you would like to use\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    scanf("%d", &functiontype);

    if (functiontype == 1) {
        printf("Enter your first number\n");
        scanf("%d", &num1);
        printf("Enter your second number\n");
        scanf("%d", &num2);
        int sum = num1 + num2;
        printf("Addition is: %d\n", sum);
    } else if (functiontype == 2) {
         printf("Enter your first number\n");
        scanf("%d", &num1);
        printf("Enter your second number\n");
        scanf("%d", &num2);
        int subtraction = num1 - num2;
        printf("Subtraction is: %d\n", subtraction);
    } else {
        printf("Invalid function\n");
    }
    printf("Do you want to perform another operation? (y/n): ");
        scanf(" %c", &continue_program);
   }

    return 0;
}