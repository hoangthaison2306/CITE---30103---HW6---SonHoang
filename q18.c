
#include <stdio.h>

int main() {
    double a, b, result;
    char op;

    printf("Enter expression (a op b), e.g. 5 + 3: ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (b == 0) {
                printf("Error: division by zero!\n");
            } else {
                result = a / b;
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}

