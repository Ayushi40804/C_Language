//WAP to find the sum of 1st and last of a six-digit number. Number must be a user input.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any six digit number: ");
    scanf("%d",&a);
    b=a/100000;
    c=a%10;
    printf("The sum of the first and last digit of a six digit number is %d.",b+c);
    return 0;
}