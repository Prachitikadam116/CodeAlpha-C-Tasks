#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("===== Calculator =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case 2:
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case 3:
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case 4:
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Division by zero is not allowed!");
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}