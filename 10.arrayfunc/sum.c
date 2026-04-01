#include <stdio.h>

void array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }

       printf("%d\n", sum);
}

int main () {
    int n;
    printf("how many numbers? ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
    printf("enter the numbers: ");
    scanf("%d", &arr[i]);
    }
    array(arr, n);
    return 0;
}