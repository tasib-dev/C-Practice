#include <stdio.h>
#include <string.h>

int main() 
{
    char a[20];
    char b[20];

    printf("type a word : ");
    scanf("%s", a);
    printf("Type another word:  ");
    scanf("%s", b);
    printf("the length of first word is %ld and second is %ld\n", strlen(a), strlen(b));
  
    if (strcmp(a, b)==0)
    {
        printf("same\n");
    } else { printf("not same\n"); }
    
  printf("joined word : %s\n", strcat(a, b));




    return 0;
}