#include <stdio.h>
int main()
{
    int x,y,a=1;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    while (a<=x || a<=y);{
        if (x%a==0 && y%a==0){
            printf("The GCD is %d",a);
        }
        else{
            printf("It had no GCD.");
        }
        a++;
    }
    printf("hi");
    return 0;
}