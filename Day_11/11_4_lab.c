#include <stdio.h>
#define m 100
int main()
{
    int x,arr[100],i,large=0;
    printf("To find the largest number in an array. The size of the array is: ");
    scanf("%d",&x);
    for (i=0 ; i<x ; i++){
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
    }
    large=arr[0];
    for(i=0 ; i<x ; i++){
        if (arr[i]>large){
            large=arr[i];
        }
        else{
        }
    }
    printf("The largest number is %d",large);
    return 0;
}