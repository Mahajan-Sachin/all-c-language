 #include <stdio.h>

int main(void) {
    int m;
    printf("Enter number of rows: ");
    scanf("%d", &m);

    // Upper half
    int nsp = m - 1;
    int nst = 1;
    for (int i = 1; i <= 2*m-1; i++) {
        for (int j = 1; j <= nsp; j++) {
            printf("  ");
        }
        for (int j = 1; j <= nst; j++) {
            printf("* ");
        }
        if(i<m){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
        
    }
    return 0;
}
