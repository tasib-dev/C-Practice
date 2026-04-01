#include <stdio.h>

int main () {
    
int arr[5] = {1,2,3,4,5};
int *p = arr;

printf("%d\n", *(arr + 0));
printf("%d\n", *(arr + 1));
printf("%d\n", *(arr + 2));
printf("%d\n", *(p+0));
printf("%d\n", *(p+1));
printf("-----------------\n");
for (int i = 0; i < 5; i++) {
    printf("%d\n", *(arr + i));
}
printf("-----------------\n");
//or advanced
for (int i = 0; i < 5; i++) {
    printf("%d\n", *p);
    p++;
}

for (int i = 0; i < 5; i++) {
    *p = *p * 2;
    p++;
}
for (int i = 0; i < 5; i++) {
    printf("%d\n", *p);
    p++;
}

    return 0;
}