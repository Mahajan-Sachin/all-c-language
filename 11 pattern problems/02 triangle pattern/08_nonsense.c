/*
A
BC
CDE
DEFG*/
#include <stdio.h>
int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        int num = i;
        for (int j = 1; j <= i; j++) {
            printf("%c", num+64);
            num++;
        }
        printf("\n");
    }
    return 0;
}
