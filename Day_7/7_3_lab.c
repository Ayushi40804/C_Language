//WAP to print the natural numbers from n to 1(value of n is user input).
#include <stdio.h>
int main()
{
    int a,b=1;
    printf("The value of n is: ");
    scanf("%d",&a);
    while(a>=b){
        printf("%d\n",a);
        a--;
    }
    return 0;
}