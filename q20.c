
#include <stdio.h>

int main() {
    int n, count = 0;

    do {
        printf("Enter an integer (0 to stop): ");
        scanf("%d", &n);

        if (n != 0) {
            count++;
        }
    } while (n != 0);

    printf("You entered %d numbers (excluding 0).\n", count);

    return 0;
}

