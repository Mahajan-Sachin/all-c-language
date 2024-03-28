#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float root = sqrt(16);
    printf("root: %f\n", root);

    float cube_root = cbrt(27);
    printf("cube_root: %f\n", cube_root);

    int m;
    printf("enter base(m):");
    scanf("%d", &m);

    int n;
    printf("enter power(n):");
    scanf("%d", &n);

    int p = pow(m, n);
    printf("%d", p);

    return 0;
}
