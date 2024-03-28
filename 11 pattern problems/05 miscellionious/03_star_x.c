/*
                                 *       *
                                   *   *
                                     *
                                   *   *
                                 *       *
*/
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	 int m;
    printf("no of sides:");
    scanf("%d", &m);
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if(i==j || j==m+1-i){
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }			
	return 0;
}