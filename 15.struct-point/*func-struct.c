#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int age;
};

void age(struct student *p) {
    p->age=p->age + 1;
}

int main () {

    struct student s[3];
    struct student *p = s;
    for (int i = 0; i < 3; i++) {
        printf("type your name and age\n");
        scanf("%s %d", (p+i)->name, &(p+i)->age);
    }

  
      struct student *temp = p;
    for (int i = 0; i<3; i++) {
          age(temp);
        printf("%s %d\n", temp->name, temp->age);
        temp++;
    }

    return 0;
}