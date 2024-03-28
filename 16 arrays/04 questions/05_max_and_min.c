#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[] = {1, 2, 3, 4, 8, 2, 9, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
        }
    }

    // Print the maximum and minimum values after the loop is complete
    printf("The greatest: %d\n", max);
    printf("The smallest: %d\n", min);

    return 0;
}
