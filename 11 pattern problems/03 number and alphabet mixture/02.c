/*
write  a c code for
1
A B
1 2 3
A B C D
1 2 3 4 5
A B C D E
*/
#include <stdio.h>
int main() {
    int m;
    printf("enter no of rows: ");
    scanf("%d",&m);  // Number of rows in the pattern

    for (int i = 1; i <=m; i++) {
        if (i % 2 == 1) {
            // Print numbers for odd rows
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        } else {
            // Print letters for even rows
            for (int j = 1; j <= i; j++) {
                printf("%c ",j+64);
            }
        }
        printf("\n");
    }
    return 0;
}
