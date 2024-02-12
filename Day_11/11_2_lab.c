#include <stdio.h>
int main()
{
    int x,y=0,arr[100],i;
    printf("To find out the sum of x numbers stored in an arry: ");
    scanf("%d",&x);
    for (i=0 ; i<x ; i++){
        printf("Enter the number: ");
        scanf("%d", &arr[i]);
        y=arr[i]+y;
    }
    printf("The sum of numbers of arry is %d",y);
    return 0;
}