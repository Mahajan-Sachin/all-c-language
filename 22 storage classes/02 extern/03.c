 #include <stdio.h>

// Declare the variables as extern
extern int num1, num2, num3;

int main() {
    // Read input
    scanf("%d %d %d", &num1, &num2, &num3);

    // Initialize min_num with num1
    int min_num = num1;

    // Check if num2 is smaller than min_num
    if (num2 < min_num) {
        min_num = num2;
    }

    // Check if num3 is smaller than min_num
    if (num3 < min_num) {
        min_num = num3;
    }

    // Print the smallest number
    printf("Smallest number is %d\n", min_num);

    return 0;
}

// Define the extern variables
int num1, num2, num3;
