#include <stdio.h>

void array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

int main () {
    int arr[5] = {1,2,3,4,5};
    array(arr, 5);
    return 0;
}