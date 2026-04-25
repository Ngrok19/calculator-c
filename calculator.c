#include <stdio.h>
#include <math.h>

// Function declarations
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error! Division by zero.\n");
        return 0;
    }
    return a / b;
}

long long factorial(int n) {
    if (n < 0) {
        printf("Error! Negative number.\n");
        return 0;
    }
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double square_root(double n) {
    if (n < 0) {
        printf("Error! Negative number.\n");
        return -1;
    }
    return sqrt(n);
}

double cube(double n) {
    return n * n * n;
}

double power(double base, double exp) {
    return pow(base, exp);
}

int main() {
    int choice;
    double num1, num2;
    int n;

    printf("Select operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("5. Factorial\n6. Square Root\n7. Cube\n8. Power\n");

    printf("Enter choice (1-8): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4 || choice == 8) {
        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
    } 
    else if (choice == 5) {
        printf("Enter an integer: ");
        scanf("%d", &n);
    } 
    else if (choice == 6 || choice == 7) {
        printf("Enter number: ");
        scanf("%lf", &num1);
    }

    switch (choice) {
        case 1:
            printf("Result: %.2lf\n", add(num1, num2));
            break;
        case 2:
            printf("Result: %.2lf\n", subtract(num1, num2));
            break;
        case 3:
            printf("Result: %.2lf\n", multiply(num1, num2));
            break;
        case 4:
            printf("Result: %.2lf\n", divide(num1, num2));
            break;
        case 5:
            printf("Result: %lld\n", factorial(n));
            break;
        case 6:
            printf("Result: %.2lf\n", square_root(num1));
            break;
        case 7:
            printf("Result: %.2lf\n", cube(num1));
            break;
        case 8:
            printf("Result: %.2lf\n", power(num1, num2));
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}