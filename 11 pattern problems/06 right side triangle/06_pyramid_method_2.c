#include <stdio.h>
#include <stdlib.h>


int main(void) {
	 int m;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    int nsp=m-1;
    int nst=1;
    for(int i=1;i<=m;i++){
        for (int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
    for(int j=1;j<=nst;j++){
        printf("* ");
    }
    nsp--;
    nst+=2;
    printf("\n");
    }			
	return 0;
}