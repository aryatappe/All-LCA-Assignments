#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;
    int valid;
    int ch;

    printf("Simple Calculator Program\n");
    printf("-------------------------\n");
    
    do {
        printf("Enter first number: ");
        valid = scanf("%f", &num1);

        while ((ch = getchar()) != '\n' && ch != EOF);

        if (!valid) {
            printf("Invalid input. Please enter a numeric value.\n");
        }
    } while (!valid);

    do {
        printf("Enter second number: ");
        valid = scanf("%f", &num2);
        while ((ch = getchar()) != '\n' && ch != EOF);

        if (!valid) {
            printf("Invalid input. Please enter a numeric value.\n");
        }
    } while (!valid);

    do {
        printf("\nChoose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");

        printf("Enter your choice (1-4): ");
        valid = scanf("%d", &choice);  

        while ((ch = getchar()) != '\n' && ch != EOF);

        if (!valid) {
            printf("Invalid input. Please enter a number from 1 to 4.\n");
            continue;
        }

        if (choice == 1) {
            result = num1 + num2;
            printf("\n%.2f + %.2f = %.2f\n", num1, num2, result);
        }
        else if (choice == 2) {
            result = num1 - num2;
            printf("\n%.2f - %.2f = %.2f\n", num1, num2, result);
        }
        else if (choice == 3) {
            result = num1 * num2;
            printf("\n%.2f x %.2f = %.2f\n", num1, num2, result);
        }
        else if (choice == 4) {
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("\nDivision by zero is not possible.\n");
            }
        }
        else {
            printf("\nInvalid choice. Please enter a number from 1 to 4.\n");
        }

    } while (choice < 1 || choice > 4);

    return 0;
}