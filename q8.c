
#include <stdio.h>

int globalVar = 100;  // global variable

int main() {
    int localVar = 50;  // local variable

    printf("Global variable: %d\n", globalVar);
    printf("Local variable: %d\n", localVar);

    return 0;
}

