//trick:here in patten system rember i=>rows j=>columns dont disturb rows printing depend on columns
//here in patten system rember i=>rows j=>columns
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
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
