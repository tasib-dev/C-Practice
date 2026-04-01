#include <stdio.h>
int main() {
    char name[20];
    char here[20]="abdullah tasib";
    printf("type your name\n");
    fgets(name, sizeof(name), stdin);
    printf("your name is %s\n", name);
    printf("%s\n", here);
    printf("%c\n", here[0]);
    for (int i=0; here[i]!=0; i++)
    {
        printf("%c", here[i]);
    }
    printf("\n");
    int length=0;
    for(int i=0; here[i]!='\0'; i++)
    {
       length++;
    }
    printf("%d\n", length);
//reversing string : method 1
    for (int i=14; i>=0;i--)
    {
        printf("%c", here[i]);
    }
    printf("\n");

//reversing string (method 2)
    
    int temp;
    for (int i = 0; i<20/2; i++)
    {
        temp=here[i];
        here[i]=here[20-1-i];
        here[20-1-i]=temp;
    }

    for (int i=0; i<20; i++)
    {
        printf("%c", here[i]);
    }




    return 0;
}