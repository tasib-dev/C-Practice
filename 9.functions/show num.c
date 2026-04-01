#include <stdio.h>

void num(int n) {
    for (int i = 1; i<=n; i++){
    printf("%d\n", i);
    }
}

int main() {
    int n;
    printf("enter your last number : ");
    scanf("%d", &n);
    num(n);

    return 0;
}