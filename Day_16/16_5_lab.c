#include <stdio.h>
int swap,x,i,arr[100];
int SWAP(int x){
    swap=arr[0];
    arr[0]=arr[x-1];
    arr[x-1]=swap;
    printf("The swapped array:\n");
    for(i=0;i<x;i++){
        printf("%d   ",arr[i]);
    }
}
int main()
{
    printf("Enter the no of elements: \n");
    scanf("%d",&x);
    printf("ENTER THE ELEMENTS:\n");
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    swap=SWAP(x);
    return 0;
}