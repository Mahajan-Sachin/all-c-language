#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int x) {
    int product = 1;
    for (int i = 1; i <= x; i++) {
        product = product * i;
    }
    return product;
}

int ncr(int y, int z) {
    return factorial(y) / (factorial(z) * factorial(y - z));
}

int main(void) {
    int n;
    printf("Enter the number of rows for Pascal's Triangle:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces to align the triangle
        for (int space = 0; space < n - i - 1; space++) {
            printf(" ");
        }

        for (int j = 0; j <= i; j++) {
            int x = ncr(i, j);
            printf("%d ", x);
        }
        printf("\n");
    }

    return 0;
}
