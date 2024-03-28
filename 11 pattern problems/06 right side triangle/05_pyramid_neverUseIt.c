//trick:use 2 loops inside loops and use formula i+j=n
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
        for (int j = 1; j <=2*i-1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
