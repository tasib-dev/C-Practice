#include <stdio.h> 
int main() {
    int n;
    int rev = 0;
    printf("enter a number :  ");
    scanf("%d", &n);

    int original = n;

    while (n != 0)
    {
        int digit = n%10;
        rev = rev*10 + digit;
        n= n/10;
    }

    if (original == rev) {
        printf("palindrome!!!\n");
    } else {
        printf("not palindrome\n");
    }



    return 0;
}