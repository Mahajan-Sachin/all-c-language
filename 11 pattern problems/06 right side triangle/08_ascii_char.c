 #include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m;
    printf("enter no of rows:");
    scanf("%d", &m);
    int nsp = m - 1;
    int num = 1;
    
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= nsp; j++) {
            printf("  ");
        }
        
        for(int j = 1; j <= num; j++) {
            printf("%c ", j+64);
        }
        
        nsp--;
        num += 2;
        printf("\n");
    }
    
    return 0;
}
