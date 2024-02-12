#include <stdio.h>
int main()
{
    int x,y=0,i=1;
    printf("To print the series: ");
    scanf("%d",&x);
    while (i<=x){
        y=y+(i*i);
        i++;
    }
    printf("The sum of the series[1*1+2*2+3*3..] is %d",y);
    return 0;
}