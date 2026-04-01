#include <stdio.h>
int main()
{
    int a;
    printf("take a integer :  ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("positive\n");
    } else if ( a == 0 )
    {
        printf("zero\n");
    } else if ( a < 0 ) {printf("negative\n");}

    int b;
    printf("take another integer :  ");
    scanf("%d",&b);

    if (b%2 == 0)
    {
        printf("even\n");
    } else {
        printf("odd\n");
    }
    
    

    return 0;
}