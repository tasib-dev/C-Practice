#include <stdio.h>
int main() {
    int sum=0;
    int n;
    printf("put the number ;  ");
    scanf("%d", &n);
    for (int i = 1; i<= n; i=i+1){
        sum = sum + i;
    }
    printf("%d\n", sum);

    int sim = 0;
    int m;
    printf("put another number :  ");
    scanf("%d", &m);
    for (int j = 1 ; j <= m ; j = j+2) {
        sim  = sim + j;
    }
    printf("%d\n", sim);

    int fact = 1;
    int f;
    printf("put the factorial wanteed digit:  ");
    scanf("%d", &f);
    for (int i = f; i >= 1; i = i-1) {
        fact = fact * i;
    }
    printf("factorial is %d\n", fact);

    return 0;
}