#include <stdio.h>

struct student {
    char name[20];
    int age;
};

int main () {

    struct student s[3];
    for (int i = 0; i < 3; i++) {
        printf("type your name and age\n");
        scanf("%s %d", s[i].name, &s[i].age);
    }

    for (int i = 0; i<3; i++) {
        printf("%s %d\n", s[i].name, s[i].age);
    }
 
    int max = 0;
    for (int i=0; i<3; i++) {
      
        if (s[max].age<s[i].age) {
          max = i;
        }
    }


    printf("%s is the oldest and he is %d years old\n", 
        s[max].name, s[max].age);

    return 0;
}