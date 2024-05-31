//WAP to calculate area of a circle while taking radius as user input.
#include <stdio.h>
int main()
{
    int a;
    float area;
    printf("Enter the radius of the circle: ");
    scanf("%d",&a);
    area = 3.14*a*a;
    printf("The area of the circle is %.2f",area);
    return 0;
}