
#include <stdio.h>

int main() {
    int n, original, rev = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    original = n;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    printf("Input number: %d\n", original);
    printf("Reversed number: %d\n", rev);

    return 0;
}

