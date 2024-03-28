#include <stdio.h>
#include <stdlib.h>


int main(void) {
	 int m;
    printf("no of sides:");
    scanf("%d", &m);
    int mid=(m/2)+1;
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            if(i==mid || j==mid)
            printf("* ");
            else{
                printf("# ");
            }
        }
        printf("\n");
    }			
	return 0;
}