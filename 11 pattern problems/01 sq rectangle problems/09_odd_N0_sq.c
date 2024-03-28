#include <stdio.h>
int main(void) {
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        int a = 1;
        for (int j = 1; j <= size; j++) {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }

    return 0;
}
