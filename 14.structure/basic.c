#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int age;
    float CGPA;
};

int main () {

    struct student s1; 
    strcpy(s1.name, "Tasib");
    s1.age = 20;
    s1.CGPA = 4.00;

    printf("%s is %d years old and has got CGPA %f\n", s1.name, s1.age, s1.CGPA);


    return 0;
}