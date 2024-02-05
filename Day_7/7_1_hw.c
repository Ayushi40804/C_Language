#include <stdio.h>
int main()
{
    int x,y=1;
    printf("Enter the number:");
    scanf("%d",&x);
    printf("The factors are:\n");
    while(y<=x){
        if (x%y==0){
            printf("%d ",y);
        }
        else{}

        y++;
    }
    return 0;
}