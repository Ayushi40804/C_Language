//WAP to reverse a three-digit number. Number must be a user input.
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter any three digit number : ");
    scanf("%d",&d);
    printf("The original number is %d\n",d);
    a=d/100;
    c=d%10;
    b=((d%100)-c)/10;
    e=c*100+b*10+a;
    printf("The reversed number is %d",e);
    return 0;
}