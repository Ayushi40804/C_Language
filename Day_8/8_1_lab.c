#include <stdio.h>
int main()
{
    int x,z=1,i=1,a=0;
    printf("Enter the value of n:");
    scanf("%d",&x);
    printf("0 ");
    do {
        printf("%d ",z);
        a=z;
        z=z+a;
        i++;
        
    }
    while(i<=x);
    return 0;
}