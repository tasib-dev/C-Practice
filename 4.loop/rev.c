#include <stdio.h> 
int main() {
    int n;
    int rev = 0;
    printf("enter a number :  ");
    scanf("%d", &n);

    while (n != 0)
    {
        int digit = n%10;
        rev = rev*10 + digit;
        n= n/10;
       
    
    }
    
 printf("reversed number %d\n", rev);


    return 0;
}