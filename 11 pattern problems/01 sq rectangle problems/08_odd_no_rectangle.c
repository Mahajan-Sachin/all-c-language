 #include <stdio.h>

int main(void) {
    int m;
    printf("no of rows:");
    scanf("%d", &m);
    
    int n;
    printf("no of columns:");
    scanf("%d", &n);
    
    for (int i = 1; i <= m; i++) {
        int a = 1;
        for (int j = 1; j <= n; j++) {  // Increment by 1 instead of 2
        printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
    
    return 0;
}
