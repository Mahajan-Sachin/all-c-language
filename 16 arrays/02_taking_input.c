#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x[5];

    // Prompt the user to enter values for the array
    printf("Enter 5 integers, one at a time:\n");

    // Get input values for the array
    for (int i = 0; i < 5; i++) {
        printf("Enter value for x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    // Display the entered values
    printf("\nEntered values for the array x: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", x[i]);
    }

    return 0;
}
