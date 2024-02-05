#include <stdio.h>
int main()
{
    int x,y=2,c=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    for(y=2;y<x;y++){
        if (x%y==0){
            c=2;
        }
        else{
        }
    }
    if (c==2){
        printf("It is not a prime number.");
    }
    else{
        printf("It is a prime number");
    }
    return 0;
}