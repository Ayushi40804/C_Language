//WAP to convert given second into its equivalent hour, minute and second as per the following format.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the total number of seconds: ");
    scanf("%d",&c);
    a=c/3600;
    b=(c%3600)/60;
    c=c%60;
    printf("The time is %d hour %d minutes and %d seconds: ",a,b,c);
    return 0;
}