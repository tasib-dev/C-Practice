#include <stdio.h>
int main () {
    int tasib[3]={10, 20, 30};

    printf("%d\n", tasib[0]);
    printf("%d\n", tasib[1]);
    printf("%d\n", tasib[2]);

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter value :  ");
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<5; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    int sum = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    printf("%d\n", sum);
//reverse array method 1 (only show reverse)
    for (int i=2; i>=0; i--)
    {
        printf("%d\n", tasib[i]);
    }

    //reverse array method 2 (make the array reversed)

    int temp;
    for (int i = 0; i<3/2; i++)
    {
        temp=tasib[i];
        tasib[i]=tasib[3-1-i];
        tasib[3-1-i]=temp;
    }

    for (int i=0; i<3; i++)
    {
        printf("%d\n", tasib[i]);
    }


    return 0;
}