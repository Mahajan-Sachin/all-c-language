#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int last_digit;

    while (n > 0) {
        last_digit = n % 10;
        printf("%d\n", last_digit);
        n = n / 10;
    }

    return 0;
}
