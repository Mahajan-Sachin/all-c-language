//write a program to print all ascii values and their eq char of 26 alphabets using while lop
#include <stdio.h>

int main() {
    int i = 65;  // ASCII value for 'A'
    
    while (i <= 90) {  // ASCII value for 'Z'
        printf("ASCII value: %d, Character: %c\n", i, i);
        i++;
    }
    
    return 0;
}
