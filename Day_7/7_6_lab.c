//WAP to find out reverse of a number.
#include <stdio.h>
int main()
{
    int a=0,b=0,x;
    printf("Enter the number: ");
    scanf("%d",&x);
    while(x!=0){
        a=x%10;
        b=b*10+a;
        x=x/10;
    }
    printf("The reverse of the number is %d",b);
    return 0;
}