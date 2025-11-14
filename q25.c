#include <stdio.h>

int main() {
    int l, r, i, j;

    printf("Enter L and R (range for tables): ");
    scanf("%d %d", &l, &r);

    for (i = l; i <= r; i++) {
        printf("\nTable of %d\n", i);

        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }

        printf("\n");
    }

    return 0;
}

