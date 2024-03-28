#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; ++i) {
        // Skip multiples of 3
        if (i % 3 == 0) {
            continue;
        }

        // Print numbers that are not multiples of 3
        printf("%d\n", i);
    }

    return 0;
}
/*In C programming, the else statement cannot be directly used with continue in the same way it is used with if. The else statement is associated with the preceding if statement and provides an alternative block of code to execute if the condition in the if statement is false. However, continue is a control flow statement that is used to skip the rest of the code inside a loop and move to the next iteration.*/