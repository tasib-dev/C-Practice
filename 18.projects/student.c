#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[20];
    int age;
    float CGPA;
};

int main () {

    int n;
    printf("enter the number of the students : ");
    scanf("%d", &n);

    struct student *p = (struct student *) calloc(n, sizeof(struct student));

while(1) {
    printf("Which option do you want? (just press the number)\n");
    printf("1. Add students' data\n");
    printf("2. show students\n");
    printf("3. show oldest\n");
    printf("4. show highest CGPA\n");
    printf("5. Exit\n");
int choice;
scanf("%d", &choice);
switch(choice) {
    case 1:
    struct student *temp = p;
    for (int i = 0; i < n; i++) {
        printf("Enter name, age and CGPA\n");
        scanf("%s %d %f", (temp)->name, &(temp->age), &(temp->CGPA));
        temp++;
        FILE *fp = fopen("student.txt", "a");
        fprintf(fp, "%s %d %f\n", temp->name, temp->age, temp->CGPA);
        temp++;
        fclose(fp);
    }
    break;

    case 2:
    temp = p;
    for (int i = 0; i<n; i++) {
        printf("%s %d %f\n", temp->name, temp->age, temp->CGPA);
        temp++;
        char str[200];
FILE *fp = fopen("student.txt", "r");
while (fgets(str, sizeof(str), fp) != NULL) {
    printf("%s", str);
}
    }
    break;
 case 3:
    int max = 0;
    for (int i=1; i<n; i++) {
        if (((p+max)->age)<((p+i)->age)) {
          max = i;
        }
    }
      printf("%s is the oldest and he is %d years old\n", 
        (p+max)->name, (p+max)->age);
        break;

    case 4:
    int maxCG = 0;
     for (int i=1; i<n; i++) {
        if (((p+maxCG)->CGPA)<((p+i)->CGPA)) {
          maxCG = i;
        }
    }
     printf("%s has got the highest CGPA and his CGPA is %f\n", 
        (p+maxCG)->name, (p+maxCG)->CGPA);
        break;

        case 5:
        free(p);
        printf("Thank you\n");
        break;
    
        default:
        printf("Wrong choice\n");
        break;
    }
    if (choice == 5) {
        break;
    }
 }
    return 0;
}