//in union only one attribute can be accessed
#include <stdio.h>
#include <stdlib.h>

typedef union student {
    int rollno;
    float percent;
    char grade;
} student;
int main(void) {
    student s ;
    s.grade='A';
    // printf("%d",s.rollno);
    // printf("%f",s.percent);
    printf("%c",s.grade);
    return 0;
}
