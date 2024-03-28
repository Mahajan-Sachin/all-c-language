 #include <stdio.h>
#include <stdlib.h>

typedef struct student {
    int rollno;
    float percent;
    char grade;
} student;

void print(student s) {
    printf("%d\n", s.rollno);
    printf("%f\n", s.percent);
    printf("%c\n", s.grade);
}

int main(void) {
    student s = {1, 99, 'A'};
    print(s);

    student k = {11, 89, 'B'};
    print(k);
    return 0;
}
