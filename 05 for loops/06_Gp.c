//display gp:1,2,4,8,16,32....upto n
#include <stdio.h>
int main(void) {
    int n;
    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Display the GP: 1, 2, 4, 8, 16, ...
    printf("Geometric Progression (GP) with common ratio 2:\n");

    int term = 1;  // First term of the GP
    for (int i = 1; i <= n; i++) {
        printf("%d", term);

        // Add a comma for all terms except the last one
        if (i < n) {
            printf(", ");
        }

        // Update the term using the common ratio (2)
        term *= 2;
    }

    return 0;
}
