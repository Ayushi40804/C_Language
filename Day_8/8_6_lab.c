//To Find the Factorial of a number
#include <stdio.h>
int main()
{
    int x,y=1,z=1;
    printf("To find the factorial of a number: ");
    scanf("%d",&x);
    while(y<=x){
        z=z*y;
        y++;
    }
    printf("%d",z);
    return 0;
}