#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("take one integer: ");
    scanf("%d", &a);
    printf("take another integeer : ");
    scanf("%d", &b);
    printf("now choose operator (+, -, *, /) : ");
    scanf(" %c", &op);

    if (op == '+')
    {
        printf("%d\n", a+b);
    } else if (op == '-') {
        printf("%d\n", a-b);
    } else if (op == '*') {
        printf("%d\n", a*b);
    } else if (op == '/' && b != 0) {
        printf("%f\n", (float)a/b);
    } else if (op == '/' && b == 0) {
        printf("can't devide by 0\n");
    } 
    
    else {
        printf("wrong operator\n");
    }
    

    return 0;
}