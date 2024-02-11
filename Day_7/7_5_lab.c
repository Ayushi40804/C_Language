//WAP to find out sum of digits of a number.
#include <stdio.h>
int main()
{
    int a,b=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(a%10!=0){
        b+=a%10;
        a=(a-(a%10))/10;
    }
    printf("The sum of the digits is %d.",b);
    return 0;
}