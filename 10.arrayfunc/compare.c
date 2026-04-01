#include <stdio.h>

int array(int arr1[], int arr2[], int size) {
    for (int i=0; i<size; i++) {
        if(arr1[i] != arr2[i]) {
            return 0;
        }
    }
    return 1;
}

int main () {
    int n;

    printf("print both array number");
    scanf("%d", &n);
    
    int arr1[n];
    int arr2[n];
   
    
    for (int i = 0; i < n ; i++) {
        printf("Enter the numbers...");
        scanf("%d", &arr1[i]);
    }
printf("-------------\n");
    for (int i = 0; i < n ; i++) {
        printf("Enter the numbers...");
        scanf("%d", &arr2[i]);
    }

if(array(arr1, arr2, n)) {
    printf("equal\n");
} else {
    printf("not equal\n");
}
    return 0;
}