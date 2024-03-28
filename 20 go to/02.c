//break a loop
#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<10;i++){
        for(j=1;j<i;j++){
            printf("%d",j);
            if(j==6)
            goto label;
        }
        printf("\n");
    }
    label:
    return 0;
}