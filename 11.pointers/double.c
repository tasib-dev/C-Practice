#include <stdio.h>

void twice(int *num) {
    *num = (*num) * 2;
}

int main () {

    int x;
    printf("enter a number :  ");
    scanf("%d", &x);
    twice(&x);
    printf("%d\n", x);


    return 0;
}