
#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if ( (n % 2 == 0) && (n % 3 == 0) && (n % 7 != 0) ) {
        printf("%d is divisible by 2 and 3 but not 7.\n", n);
    } else {
        printf("%d does NOT meet the condition.\n", n);
    }

    return 0;
}

