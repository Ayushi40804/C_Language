#include <stdio.h>
int main()
{
    int arr[100],x,y,i,z;
    printf("Enter the element limit of array: ");
    scanf("%d",&x);
    for(i=0 ; i<x ; i++){
        printf("Enter the number:");
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of new limit:");
    scanf("%d",&y);
    printf("Enter the location of array:");
    scanf("%d",&z);
    for (i=0 ; i<x ; i++){
        if ((i)==z){
            i=x;
            for(i;i>z;i--){
                arr[i]=arr[i-1];
            }
            arr[z]=y;
        }
    }
    x++;
    for(i=0 ; i<x ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}