//To test for armstrong number.Example 153,370,371,407.
#include <stdio.h>
int main()
{
    int x,b=0,a=0,c=0;
    printf("Enter the number:");
    scanf("%d",&x);
    c=x;
    while(x!=0){
        a=x%10;
        b=a*a*a+b;
        x=x/10;
    }
    if (b==c){
        printf("It is an armstrong number.");
    }
    else{
        printf("It is not an armstrong number.");
    }
    return 0;
}