#include <stdio.h>
int main () {
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    for(char i= 'A'; i <= 'D'; i++) {
        for(char j= 'A'; j <= i; j++){
            printf("%c", j);
        }
        printf("\n");
    }
    
    for (int i=1; i <= 4; i++)
    {
        for (int j=1; j <= 4; j++)
        {
            printf("*");
        }
        printf("\n");
    }

     
    for (int i=1; i <= 4; i++)
    {
        for (int j=1; j <= 4-i; j++)
        {
            printf(" ");
        }
        
        for (int j=1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("-----------------\n");

    for (int i = 1; i <= 4; i++)
    {
        for (int j=4; j >= i; j--)
        {printf("*");}
        printf("\n");
    }

    printf("----------------\n");

    for (int i = 1; i <= 20; i++)
    {
        for (int j= 1; j <= i-1; j++)
        {
            printf(" ");
        }
        for (int j= 20; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}