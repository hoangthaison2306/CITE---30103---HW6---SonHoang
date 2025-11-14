#include <stdio.h>

int main() {
    int i, count = 0;

    for (i = 1; i <= 50; i++) {
        if (i % 5 == 0) {
	continue;
        }

        printf("%d\n", i);
        count++;

        if (i == 40) {
          break;
        }
    }

    printf("Total numbers displayed: %d\n", count);

    return 0;
}

