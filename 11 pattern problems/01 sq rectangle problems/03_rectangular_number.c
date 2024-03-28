 #include <stdio.h>

int main(void) {
    int m;
    printf("no of rows:");
    scanf("%d", &m);
    
    int n;
    printf("no of columns:");
    scanf("%d", &n);
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    
    return 0;
}
