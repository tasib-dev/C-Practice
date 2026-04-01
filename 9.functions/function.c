#include <stdio.h>

void greet(char name[]) {
    printf("Hello World!, %s\n", name);
}

int add(int a, int b) {
    int result = a + b;
    return result; 
}

float div(int c, int d) {
    float result = (float)c/d;
    return result;
}

int main() {
    char name[]="Tasib";
    greet(name);

    int fol=add(3, 5);
    printf("%d\n", fol);

    float result = div(3, 5);
    printf("%f\n", result);



    return 0;
}