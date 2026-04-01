#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");

    fprintf(fp, "This is my first file\n");
    fclose(fp);
    fp = fopen("test.txt", "a");
    fprintf(fp, "now it is appending\n");
    fclose(fp);

 char name[20] = "Tasib";
fp = fopen("test.txt", "a");
fprintf(fp, "%s\n", name);
fclose(fp);


  fp = fopen("test.txt", "r");
char str[100];

while (fgets(str, 100, fp) != NULL) {
    printf("%s", str);
}

fclose(fp);
    return 0;
}


