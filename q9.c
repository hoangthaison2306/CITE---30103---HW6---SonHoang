#include <stdio.h>

int main(void) {
    int a = 7, b = 2;

    int intResult = a / b;             // integer division
    float floatImplicit = a / b;       // implicit casting (still integer division)
    float floatExplicit = (float)a / b; // explicit casting => real division

    printf("Integer division: %d\n", intResult);
    printf("Implicit float: %.2f\n", floatImplicit);
    printf("Explicit float: %.2f\n", floatExplicit);

    return 0;
}

