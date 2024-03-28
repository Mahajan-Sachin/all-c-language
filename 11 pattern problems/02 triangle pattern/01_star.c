/*here in patten system rember i=>rows j=>columns:from our first rule i doesnot change so we have to fix limit of columns and we will see j<=i
*
* *
* * *
*/
#include <stdio.h>
int main(void) {
	int m;
    printf("enter number of rows: ");
    scanf("%d",&m);	
    for(int i=1;i<=m;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }		
	return 0;
}