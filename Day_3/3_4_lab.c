//WAP to calculate area of a triangle who’s base and height are user input.
#include <stdio.h>
int main()
{
    int a,b;
    float area;
    printf("Enter the Height of the triangle: ");
    scanf("%d",&a);
    printf("enter the base ");
    scanf("%d",&b);
    area=(a*b)/2;
    printf("The area of the triangle is %0.2f",area);
    return 0;
}