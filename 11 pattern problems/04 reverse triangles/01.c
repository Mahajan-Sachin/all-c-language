/*

* * * 
* *     //here we use a formula:i+j=n+1  //n=no of rows
*                              =>j=n+1-i

*/
#include <stdio.h>
int main(void) {
	int m;
    printf("enter number of rows: ");
    scanf("%d",&m);	
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
            printf("* ");
        }
        printf("\n");
    }		
	return 0;
}