#include <stdio.h>

struct student {
    char name[20];
    int age;
};

int main () {

    struct student s[3];
    struct student *p = s;
    for (int i = 0; i < 3; i++) {
        printf("type your name and age\n");
        scanf("%s %d", (p+i)->name, &(p+i)->age);
    }
  
    struct student *temp = p;
    for (int i = 0; i<3; i++) {
        printf("%s %d\n", temp->name, temp->age);
        temp++;
    }
 
    int max = 0;
    for (int i=0; i<3; i++) {
      
        if ((p+max)->age<(p+i)->age) {
          max = i;
        }
    }


    printf("%s is the oldest and he is %d years old\n", 
        (p+max)->name, (p+max)->age);

    return 0;
}