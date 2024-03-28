//syntax:
// switch(integer exp){
//     case const 1://acts as if
//     do __this
//     break
//     case const 2:
//     do __thiscall
//     break;
//     default//acts as else
// }
 #include <stdio.h>

int main(void) {
    int x, y;
    char z;

    printf("enter x: ");
    scanf("%d", &x);

    printf("enter y: ");
    scanf("%d", &y);

// Certainly! The getchar() function is used to read a single character from the standard input (keyboard in this case). In this specificcontext, it is used to consume the newline character (\n) that remains in the input buffer after the user enters the value for y using scan("%d", &y).

// When you press Enter after entering the value for y, the newline character is added to the input buffer. If you don't handle or consume it, the next scanf("%c", &z) may read this newline character instead of waiting for a new character input from the user.

//So, by using getchar() after reading y, you are essentially reading and discarding the newline character, ensuring that the subsequent scanf("%c", &z) reads the actual character input from the user for z. This helps in preventing unexpected behavior and allows the program to function as intended.
    getchar();

    printf("enter z: ");
    scanf("%c", &z);

    switch (z) {
    case '+':
        printf("%d\n", x + y);
        break;

    case '-':
        printf("%d\n", x - y);
        break;

    case '*':
        printf("%d\n", x * y);
        break;

    case '/':
        printf("%d\n", x / y);
        break;

    default:
        printf("invalid char\n");
        break;
    }

    return 0;
}
