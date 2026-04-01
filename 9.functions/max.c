#include <stdio.h>

void max(int a, int b) {
    if (a > b)
    {
        printf("%d is maximum\n", a);
    } else if (a==b) {
        printf("both are equal\n");
    } else {printf("%d is maximum\n", b);}
    
}


int main() {
    int a, b;
    printf("give me two integers: ");
    scanf("%d %d", &a, &b);
    max(a, b);


    return 0;
}