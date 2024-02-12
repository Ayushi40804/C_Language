#include <stdio.h>
int main()
{
    int x,y=0,a=0,b=1,c=1,i=1;
    printf("To print the fourth number as the sum of first three: ");
    scanf("%d",x);
    printf("%d\n%d\n%d\n",a,b,c);
    while(i<=x){
        y=a+b+c;
        printf("%d\n",y);
        a=b;
        b=c;
        c=y;
        i=i+1;
    }
    return 0;
}