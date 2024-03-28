#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    typedef struct person {
        char name[30];
        int salary;
        int age;
    }person;

    person p1;
    strcpy(p1.name,"karan"); 
    p1.age=24;
    p1.salary=100000;

    person p2={"Mohan",200000,30}; 

    printf("%d\n", p1.age);
    printf("%s\n", p2.name);
    printf("%s\n", p1.name);
    return 0;
}
