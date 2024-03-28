 #include <stdio.h>

int main(void) {
    int m;
    printf("Enter number of rows: ");
    scanf("%d", &m);

    // Upper half
    int nsp = m - 1;
    int nst = 1;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= nsp; j++) {
            printf("  ");
        }
        for (int j = 1; j <= nst; j++) {
            printf("* ");
        }
        printf("\n");
        nsp--;
        nst += 2;
    }

    // Lower half
    nsp = 1;
    nst = 2 * m - 3;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= nsp; j++) {
            printf("  ");
        }
        for (int j = 1; j <= nst; j++) {
            printf("* ");
        }
        printf("\n");
        nsp++;
        nst -= 2;
    }

    return 0;
}
