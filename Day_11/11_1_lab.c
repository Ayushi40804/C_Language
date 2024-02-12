#include <stdio.h>
int main()
{
    int x,i,a[100];
    printf("Creating an array to store N digits: ");
    scanf("%d",&x);
    for(i=0 ; i<x ; i++){
        printf("The number is");
        scanf("%d", &a[i]);
    }
    for(i=0 ; i<x ; i++){
        printf("%d ",a[i]);
    }
    return 0;
}