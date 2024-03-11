#include <stdio.h>
int arr[100],i,large,x,small;
int Largest(int x){
    large=arr[0];
    for(i=0;i<x;i++){
        if (large<=arr[i]){
            large=arr[i];
        }
    }
    return large;
}
int Smallest(int x){
    small=arr[0];
    for(i=0;i<x;i++){
        if (small>=arr[i]){
            small=arr[i];
        }
    }
    return small;
}
int main()
{
    printf("Enter the number:");
    scanf("%d",&x);
    printf("Enter the Elements:\n");
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    large=Largest(x);
    small=Smallest(x);
    printf("The largest number is %d and the smallest number is %d.",large,small);
    return 0;
}