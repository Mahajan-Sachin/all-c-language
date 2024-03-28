#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int x;
    x=5;
    struct  student
    {
        int rollno;
        float percent;
        char grade;
    };
    struct student karan;//declaration
    karan.grade ='B';
    karan.rollno=66;
    karan.percent=75.5;
    printf("%c\n",karan.grade);
    printf("%f\n",karan.percent);
    printf("%d\n",karan.rollno);   

    struct student harsh;//declaration
    harsh.grade ='A';
    harsh.rollno=60;
    harsh.percent=99.5;
    printf("%c\n",harsh.grade);
    printf("%f\n",harsh.percent);
    printf("%d\n",harsh.rollno);
    // we can also do shortcut for multiple structures

    struct student rohan={88,65.78,'C'};// just declare seq wise
    printf("%c\n",rohan.grade);
    printf("%f\n",rohan.percent);
    printf("%d\n",rohan.rollno);
     	
	return 0;
}