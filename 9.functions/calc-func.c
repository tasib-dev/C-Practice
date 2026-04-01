#include <stdio.h>

int add(int a,int b) {
    int result = a + b;
    return result;
}

int sub(int a,int b) {
    int result = a - b;
    return result;
}

int mul(int a,int b) {
    int result = a * b;
    return result;
}

float div(int a,int b) {
    if (b==0)
    {
        printf("can't devide by zero\n");
        return 0;
    } else {
        float result = (float)a/b;
        return result;
    }
    
}

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
        printf("%d", add(a, b));
        break;

        case '-':
        printf("%d", sub(a,b));
        break;

        case '*':
        printf("%d", mul(a, b));
        break;

        case '/':
        printf("%f", div(a, b));
        break;

        default:
        printf("wrong operator");
    }

    return 0;
}