#include <stdio.h>
int sum_2_num()
{
    int x,y;
    printf("Enter the numbers to be added : \n");
    scanf("%d\n",&x);
    scanf("%d",&y);
    printf("The sum is %d",x+y);
    return 0;
}
int main()
{
    sum_2_num();
    return 0;
}
