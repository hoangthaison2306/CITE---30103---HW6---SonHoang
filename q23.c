#include <stdio.h>

int main() {
    int n;
    int pos = 0, neg = 0, even = 0, odd = 0;

    do {
        printf("Enter integer (0 to stop): ");
        scanf("%d", &n);

        if (n != 0) {
            if (n > 0) pos++;
            else       neg++;

            if (n % 2 == 0) even++;
            else            odd++;
        }
    } while (n != 0);

    printf("Positives: %d\n", pos);
    printf("Negatives: %d\n", neg);
    printf("Evens: %d\n", even);
    printf("Odds: %d\n", odd);

    return 0;
}

