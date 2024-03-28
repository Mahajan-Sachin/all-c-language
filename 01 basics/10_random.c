// to find a random alphabet
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate and print a random uppercase letter between 'A' and 'Z'
    char randomLetter = 'A' + rand() % 26;
    printf("Random letter: %c\n", randomLetter);

    return 0;
}
