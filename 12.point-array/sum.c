#include <stdio.h>

int main () {

    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    int sum = 0;
    for (int i=0; i<5; i++) {
        sum = sum + *p;
        p++;
    }

    printf("%d\n", sum);


//another system
    int som=0;
    for (int i=0; i<5; i++) {
        som = som + *(arr+i);
    }
    printf("%d\n", som);

//for max
    int max = *(arr + 0);

    for (int i = 0; i <5; i++) {
        if (*(arr+i)>max) {
            max = *(arr+i);
        }
    }

    printf("this is max %d\n", max);

    return 0;
}