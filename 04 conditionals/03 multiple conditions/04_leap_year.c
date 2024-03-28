// any year which is divisible by 400 , not divisible by 100 is and divisible by 4 is a leap year 
 #include <stdio.h>

int main() {
    int x;
    printf("Enter a year: ");
    scanf("%d", &x);

    if ((x % 400 == 0) || ((x % 100 != 0) && (x % 4 == 0))) {
        printf("Given year is a leap year");
    } else {
        printf("Not a leap year");
    }

    return 0;
}
