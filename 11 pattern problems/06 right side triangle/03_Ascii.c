#include <stdio.h>

int main(void) {
    int m;
    printf("Enter number of rows: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++) {
        // Print spaces before printing stars
        for (int j = 1; j <= m - i; j++) {
            printf("  ");
        }

        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("%c ",j+64);
        }

        printf("\n");
    }

    return 0;
}
