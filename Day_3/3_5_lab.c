//Write a C program to perform swapping of two integers using a third variable.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number 1: ");
    scanf("%d",&a);
    printf("Enter number 2: ");
    scanf("%d",&b);
    printf("The first and the second number are %d and %d.\nAfter swapping.\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("The first and the second number are %d and %d.",a,b);
    return 0;
}