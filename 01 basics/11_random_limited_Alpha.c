// to get a random bw o to z
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print a random lowercase letter between 'o' and 'z'
    char randomLetter = 'o' + rand() % 15;
    printf("Random letter: %c\n", randomLetter);

    return 0;
}
