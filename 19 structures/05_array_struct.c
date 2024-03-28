#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int x;
    x=5;
    typedef struct student
    {
        int rollno;
        float percent;
        char grade;
    }student;
     student arr[3];
    arr[0].grade='A';
    arr[0].percent=94.8;
    arr[0].rollno=90;
 
    student s={79,70.7,'B'};
    arr[1]=s;
    printf("%d\n",arr[1].rollno);
    printf("%c\n",arr[1].grade);
    printf("%f\n",arr[1].percent);    
    return 0;
}