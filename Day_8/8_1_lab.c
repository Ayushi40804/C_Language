//To print Fibonacci Series
#include <stdio.h>
int main()
{
    int a=0,b=1,c,d,i;
    printf("Enter the number of Fibonacci to be print: ");
    scanf("%d",&d);
    c=a+b;
    printf("%d\n%d\n",a,b);
    for (i=3 ; i<=d ; i++){
        printf("%d \n",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}