#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[] = {-1, -2, -3, -4, -8, -2, -9, -1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Initialize min with the first element of the array
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    // Print the minimum value after the loop is complete
    printf("The smallest: %d\n", min);

    return 0;
}
