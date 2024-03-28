/*
Enter the number of rows: 5
1
A 
2
A B 
3
A B C 
4
A B C D 
5
A B C D E 
*/
#include <stdio.h>

int main() {
    int i, j, n;
    char ch = 'A';

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d\n", i);

        for(j = 0; j < i; j++) {
            printf("%c ",'A'+j);
        }
        
        printf("\n");
    }

    return 0;
}
