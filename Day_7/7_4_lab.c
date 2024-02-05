//WAP to take 10 different numbers as input. Print their sum and average.
#include <stdio.h>
int main()
{
    int a=1,b;
    float sum;
    printf("the sum of 10 numbers.\n");
    while(a<=10){
        printf("Enter the number: ");
        scanf("%d",&b);
        sum+=b;
        a++;
    }
    printf("The sum is %0.2f.\nThe average is %0.2f",sum,sum/10);
    return 0;
}