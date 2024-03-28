#include <stdio.h>

int main() {
    int arr[3][3];
    int arr2[3][3];
    int arr3[3][3];

    int n;
    printf("Enter num for matrix 1: ");
    scanf("%d", &n);

    // Input for matrix 1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = n;
        }
    }

    int m;
    printf("Enter num for matrix 2: ");
    scanf("%d", &m);

    // Input for matrix 2
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr2[i][j] = m;
        }
    }

    // Sum of two matrices
    for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 3; l++) {
            arr3[k][l] = arr[k][l] + arr2[k][l];
        }
    }

    // Display the sum matrix
    printf("Sum of the two matrices:\n");
    for (int k = 0; k < 3; k++) {
        for (int l = 0; l < 3; l++) {
            printf("%d ", arr3[k][l]);
        }
        printf("\n");
    }

    return 0;
}
