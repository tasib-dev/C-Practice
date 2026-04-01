#include <stdio.h>

//this is normal
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//with +/- but risk of overflow
void risk(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

//with x-or
void rare(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main () {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf(" x = %d and y=%d\n", x, y);
    risk(&x, &y);
    printf(" x = %d and y=%d\n", x, y);
    rare(&x, &y);
    printf(" x = %d and y=%d\n", x, y);

    return 0;
}