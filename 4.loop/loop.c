#include <stdio.h>
int main() {
    for (int i = 1; i<= 5; i++) {
        printf("%d Tasib \n", i);
    }
int i=1;

while (i <= 5) {
    printf("%d Hello\n", i);
    i++;
}

int a = 1;
do {
    printf("%d while\n", a);
    a++;
} while (a < 5);

for (int i=1; i<=99; i++); {
    printf("%d\n", i);
}

    return 0;
}