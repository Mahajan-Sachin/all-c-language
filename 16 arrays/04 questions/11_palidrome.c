#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[] = {1, 2, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int brr[n];
    for (int j = 0; j < n; j++) {
        brr[j] = arr[n - 1 - j];
    }

    // Print the reversed array
    for (int k = 0; k < n; k++) {
        printf("%d ", brr[k]);
    }
    printf("\n");

    // Check if arr is a palindrome
    int isPalindrome = 1;  // Assume arr is a palindrome
    for (int l = 0; l < n; l++) {
        if (arr[l] != brr[l]) {
            isPalindrome = 0;  // Set to 0 if elements don't match
            break;
        }
    }

    if (isPalindrome==1) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
