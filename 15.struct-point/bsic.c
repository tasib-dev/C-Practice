#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int age;
    float CGPA;
};

int main () {

    struct student s1; 
    struct student *p;
    p = &s1;
    strcpy(p->name, "Tasib");
    (*p).age = 20;
    p->CGPA = 4.00;

    printf("%s is %d years old and has got CGPA %f\n", (*p).name, p->age, (*p).CGPA);
//(*p).name and p->name is same thing

    return 0;
}