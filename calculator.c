#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    printf("Simple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1:
            printf("Result = %.2f", num1 + num2);
            break;

        case 2:
            printf("Result = %.2f", num1 - num2);
            break;

        case 3:
            printf("Result = %.2f", num1 * num2);
            break;

        case 4:
            if(num2 != 0)
                printf("Result = %.2f", num1 / num2);
            else
                printf("Error! Division by zero.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}