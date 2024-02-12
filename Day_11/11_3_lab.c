#include <stdio.h>
int main()
{
    int x,arr[100],i;
    float y=0;
    printf("To find out the sum of x numbers stored in an arry: ");
    scanf("%d",&x);
    for (i=0 ; i<x ; i++){
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
        y=arr[i]+y;
    }
    printf("The average of numbers of arrya is %f",y/x);
    return 0;
}