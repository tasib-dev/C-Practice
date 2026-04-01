#include <stdio.h>

int main () {
char src[] = "Tasib";
char dest[20];

char *p = src;
char *q = dest;

while (*p != '\0') {
    *q = *p;
    p++;
    q++;
}
*q = '\0';

printf("%s\n", src);
printf("%s\n", dest);

while (*p != '\0') {
    printf("%c", *p);
    p++;
}
    return 0;
}