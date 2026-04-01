#include <stdio.h>

void checkPalindrome(int arr[], int size) {
    int rev[100]; 
    int isPalindrome = 1;

    for(int i = 0; i < size; i++) {
        rev[i] = arr[size - i - 1];
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if(isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
}

int main() {
    int arr[5] = {1,2,3,4,5};

    checkPalindrome(arr, 5);

    return 0;
}
