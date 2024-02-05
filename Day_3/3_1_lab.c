/*WAP to perform the addition of two integers and display the result. 
Input must be given by   user.*/
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("The sum of %d and %d is %d.\n",a,b,a+b);
    return 0;
}