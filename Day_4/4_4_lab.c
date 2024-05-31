//WAP to find the sum of all digits of a three-digit number. Number must be a user input.
#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter any three digit number : ");
    scanf("%d",&d);
    a=d/100;
    c=d%10;
    b=((d%100)-c)/10;
    printf("The sum of all digits of %d is %d.",d,a+b+c);
    return 0;
}