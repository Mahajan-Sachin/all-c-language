 #include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
    int arr[3][3] = {-1,-2,-3,-4,-8,-7,-9,-5,-6};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    int max = INT_MIN;
    for(int k=0; k<3; k++){
        max = INT_MIN;  // Reset max for each row
        for(int m=0; m<3; m++){
            if(max < arr[k][m]){
                max = arr[k][m];
            }
        }
        printf("Max in row %dst is: %d\n", k+1, max);
    }

    return 0;
}
