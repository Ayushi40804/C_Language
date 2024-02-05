#include <stdio.h>
int main()
{
    int x,y=1,sum=0;
    printf("Enter the number to check: ");
    scanf("%d",&x);
    for (y=1 ;y<x;y++){
        if (x%y==0){
            sum=sum+y;
        }
        else{
        }
    }
    if (sum==x){
    printf("%d is perfect number.",sum);
    }
    else{
        printf("It is not a perfect number.");
    }
    return 0; 
}