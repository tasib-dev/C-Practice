#include <stdio.h>

void array(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++) {
        if(arr[i]>max) {
            max=arr[i];
        }
        if(arr[0]<min) {
            min = arr[i];
        }
    }

       printf("this is max %d and this is min %d\n", max, min);
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