 #include <stdio.h>

int main(void) {
    int m;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    int nst = 1;
    int nsp = m - 1;
    
    for (int i = 1; i <= m; i++) {
        // Print spaces before printing numbers
        for (int j = 1; j <= nsp; j++) {
            printf("  ");
        }

        // Print increasing numbers
        for (int k = 1; k <= nst; k++) {
            printf("%d ", k);
        }

        // Print decreasing numbers
        for (int l = nst - 1; l >= 1; l--) {
            printf("%d ", l);
        }

        printf("\n");
        nst++;
        nsp--;
    }

    return 0;
}
