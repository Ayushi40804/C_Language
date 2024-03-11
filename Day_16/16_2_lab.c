#include <stdio.h>
int arr[100],i,j,x,y,sort;
int Ascending(int x){
    printf("Enter the elements of the array:\n");
    for (i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=x-1;i++){
        for(j=0;j<x-i;j++){
            if(arr[j]>arr[j+1]){
                sort=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=sort;
            }  
        }
    }
    for(i=0;i<x;i++){
        printf("%d  ",arr[i]);
    }
}
int main()
{
    printf("Enter the number: ");
    scanf("%d",&y);
    sort=Ascending(y);
    return 0;
}