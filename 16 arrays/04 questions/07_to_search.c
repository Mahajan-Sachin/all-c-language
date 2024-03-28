#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    int arr[] = {17, 12, 31, 4, 5, 6, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int x;
    printf("enter the no which you want to check: ");
    scanf("%d",&x);
    bool flag=false;

    for (int j = 0; j < n; j++) {
        if (arr[j] == x) {
            flag=true;
            break;
        }
    }

    // Print the count after the loop is complete
     flag==true?printf("%d exist",x):printf("%d not exist",x);

    return 0;
}
