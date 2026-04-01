#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("take one integer: ");
    scanf("%d", &a);
    printf("take another integer : ");
    scanf("%d", &b);
    printf("now choose operator (+, -, *, /) : ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
        printf("%d", a+b);
        break;

        case '-':
        printf("%d", a-b);
        break;

        case '*':
        printf("%d", a*b);
        break;

        case '/':
        if (b != 0)
        {
            printf("%f", (float)a/b);
        } else 
        {printf("can't devide by zero\n");}
        break;

        default:
        printf("wrong operator");
    }

    return 0;
}