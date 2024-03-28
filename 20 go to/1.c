#include <stdio.h>

int main() {
    int n = 100;

    if (n < 103) {
        fun:
            printf("%d", n);
            goto fun;
    }

    return 0;
}