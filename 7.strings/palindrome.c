#include <stdio.h>
int main() {
    char name[20];
    char original = name;

    printf("enter the word to check if palindrome :   \n");
    fgets (name, sizeof(name), stdin);
    int temp;
    for (int i=0; i<20/2; i++){
        temp=name[i];
        name[i]=name[20-1-i];
        name[20-1-i]=temp;
    }

    for (int i=0; i<20; i++){
        printf("%c", name[i]);
    
    
    if (original == name[i]) {
        printf("palindrome !!!\n");
    } else { printf("not palindrome\n");}
}

    return 0;
} 