#include <stdio.h>

int main() {
    // Declare variables in register memory
    register int weight;
    register double height;

    // Read weight and height from input
    scanf("%d", &weight);
    scanf("%lf", &height);

    // Calculate BMI
    double bmi = weight / (height * height);

    // Determine grade based on BMI
    char grade;
    if (bmi < 18.5) {
        grade = 'U';  // Underweight
    } else if (bmi >= 18.5 && bmi < 25.0) {
        grade = 'N';  // Normal weight
    } else if (bmi >= 25.0 && bmi < 30.0) {
        grade = 'H';  // Heavyweight
    } else {
        grade = 'O';  // Overweight
    }

    // Print the grade
    printf("%c\n", grade);

    return 0;
}
