#include <stdio.h>
int arr[100],large,seclarge,x,i,y;
int SECLARGEST(int x){
    if (arr[0]>arr[1]){
        large=arr[0];
        seclarge=arr[1];
    }
    else{
        large=arr[1];
        seclarge=arr[0];
    }
    for(i=0 ; i<x ; i++){
        if (large<arr[i]){
            seclarge=large;
            large=arr[i];
            }
            else{
                seclarge=arr[i];
            }
    }
    return seclarge;
}
int main()
{
    printf("Enter the number:");
    scanf("%d",&y);
    printf("Enter the elements of array:\n");
    for (i=0;i<y;i++){
        scanf("%d",&arr[i]);
    }
    seclarge=SECLARGEST(y);
    printf("The second largest number is %d",seclarge);
    return 0;
}