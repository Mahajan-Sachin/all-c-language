#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[] = {17, 12, 31, 4, 5, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int x = 10;
    int count = 0;

    for (int j = 0; j < n; j++) {
        if (arr[j] > x) {
            count++;
        }
    }

    // Print the count after the loop is complete
    printf("Number of elements greater than %d: %d\n", x, count);

    return 0;
}
