#include <stdio.h>
int main()
{
    int a=0,b=0,x,y;
    printf("Enter the number: ");
    scanf("%d",&x);
    y=x;
    while(x!=0){
        a=x%10;
        b=b*10+a;
        x=x/10;
    }
    if (b==y){
        printf("It is a Palindrome Number.");
    }
    else{
        printf("It ia not a Palindrome Number");
    }
    return 0;
}