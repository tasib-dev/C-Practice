#include <stdio.h>

void fact(int n) {
    int fact = 1;
    for (int i=n; i>=1; i--) {
        fact = fact*i;
    }

      printf("%d\n", fact);

}

int main() {
    int n;
    printf("type your number: ");
    scanf("%d", &n);
    fact(n);

    return 0;
}