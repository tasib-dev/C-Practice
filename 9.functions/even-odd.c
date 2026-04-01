#include <stdio.h>

void evodd(int a) {
    if (a%2==0)
    {
        printf("%d is even\n", a);
    } else {printf("%d is odd\n", a);}
}
    


int main() {
    int a;
    printf("give me a integers: ");
    scanf("%d", &a);
    evodd(a);


    return 0;
}