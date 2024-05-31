//WAP to convert a distance in meter entered through keyboard into its equivalent kilometer and meter as per the following format.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the total length in meter : ");
    scanf("%d",&a);
    b=a/1000;
    c=a%1000;
    printf("%d meters = %d kilometer and %d meter.",a,b,c);
    return 0;
}