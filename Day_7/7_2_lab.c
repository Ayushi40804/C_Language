//WAP to print the natural numbers from 1 to n (value of n is user input).
#include <stdio.h>
int main()
{
    int a,b=1;
    printf("The value of n is: ");
    scanf("%d",&a);
    while(b<=a){
        printf("%d\n",b);
        b++;
    }
    return 0;
}