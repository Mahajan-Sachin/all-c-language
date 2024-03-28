#include <stdio.h>

int main() {
    int a1, d, input;

    // Input the first term and common difference
    printf("Enter the first term (a1): ");
    scanf("%d", &a1);

    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    // Input the value to check
    printf("Enter the value to check: ");
    scanf("%d", &input);

    // Check if input is part of the arithmetic sequence
    if ((input - a1) % d == 0) {
        int n = (input - a1) / d + 1;
        printf("%d is part of the arithmetic sequence at position n = %d\n", input, n);
    } else {
        printf("%d is not part of the arithmetic sequence.\n", input);
    }
    return 0;
}
