#include <stdio.h>

int main () {
    printf("ok, let's practice\n");
    int age = 20;
    int first = 5;
    int second = 7;
    float height = 5.3;
    char grade = 'A';
    char school[20] = "lfps";
    double result = second / (double)first;
    
    printf("age: %d\n", age);
    printf("height: %f\n", height);
    printf("Grade: %c\n", grade);
    printf("school: %s\n", school);

    printf("your next year age is %d and your height is %f\n", age+1, height);
    printf("%.40lf\n", result);
    printf("%f\n", 5.0/3);

    int a;
    int b;
    printf("enter 2 numbers : ");
    scanf("%d" "%d", &a, &b);
    printf("this is your numbers %d and %d\n", a, b);

    char name[20];
    char class;
    printf("What's your name?  ");
    scanf("%19s", name);
    printf("Hello %s, you are %d years old\n", name, age);
    printf("what's your class? ");
    scanf(" %c", &class);
    printf("this is your class %c\n", class);

    return 0;
}