//WAP to find Fahrenheit for a given centigrade temperature. Note: C = (F – 32) * 5/9 and F = C * (9/5) + 32]
#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the temperature in Farenhite: ");
    scanf("%f",&a);
    b=(a-32)*5/9;
    printf("The temperature in Celcius is %.2f.\n",b);
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&c);
    d=(((9*c)/5)+32);
    printf("The temperature in Farenhite is %.2f\n",d);
    return 0;
}