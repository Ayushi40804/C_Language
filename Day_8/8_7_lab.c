#include <stdio.h>
int main()
{
    int x,y=1,z1=1,z2=1,z3=1,a,b,c,z4=0;
    printf("To find the factorial of a number: ");
    scanf("%d",&x);
    c=x%10;
    b=((x-c)%100)/10;
    a=((x-b)%1000)/100;
    while(y<=a){
        z1=z1*y;
        y++;
    }
    y=1;
    while(y<=b){
        z2=z2*y;
        y++;
    }
    y=1;
    while(y<=c){
        z3=z3*y;
        y++;
    }
    z4=z1+z2+z3;
    printf("%d\n",z4);
    if (z4==x){
        printf("It is a strong number.");
    }
    else{
        printf("It is not a strong number.");
    }
    return 0;
}