//WAP to convert given paisa into its equivalent rupee and paisa as per the following format.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the total paisa: ");
    scanf("%d",&a);
    b=a/10;
    a=a-(b*10);
    printf("The total paisa in rupees is %d rupees and %d paisa.",b,a);
    return 0;
}