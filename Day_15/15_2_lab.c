//find factorial of a number using loop
#include <stdio.h>
int x,i,fact=1,factor=0;
int factorial(){
    printf("Enter the number: ");
    scanf("%d",&x);
    for (i=1 ; i<=x ; i++ ){
        fact=fact*i;
    }
    return fact;
}
int main()
{
    factor=factorial();
    printf("%d",factor);
    return 0;
}