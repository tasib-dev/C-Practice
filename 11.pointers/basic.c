#include <stdio.h>

void fix(int *x) {
    *x = 100;
}

int main () {
    int a = 10;
    int *p;
    p = &a;
    printf("address of a is %p\n", p);
    printf("value of a is %d\n", *p);

    *p = 20;
    printf("%d %d\n", *p, a);

    fix(p);
    printf("%d\n", a);


    return 0;
}