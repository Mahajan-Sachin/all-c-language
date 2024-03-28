#include <stdio.h>
#include <stdlib.h>

int fibo(int x) {
    if (x == 1 || x == 2) {
        return 1;
    } else {
        return fibo(x - 1) + fibo(x - 2);
    }
}

void printFibonacciSeries(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
}

int main(void) {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive Natural integer for N.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms: ", n);
    printFibonacciSeries(n);

    return 0;
}
