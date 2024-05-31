//Write a C program to perform swapping of two integers without using a third variable.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("The first and the second number are %d and %d.\nAfter swapping.\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The first and the second number are %d and %d.",a,b);
    return 0;
}