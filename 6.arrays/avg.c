#include <stdio.h>
int main () {
    int n;
    printf("type, how many numbers you want to operate with?   ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n ; i++) {
        printf("Enter the numbers...");
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
        sum=sum+arr[i];
    }

    float avg=(float)sum/n;
    printf("The average is %f\n", avg);

    int max=arr[0];
    int min=arr[0];

    for (int i=0; i<n ; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("This is max %d and this is min %d\n", max, min);

    return 0;
}