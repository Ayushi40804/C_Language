#include <stdio.h>
int main()
{
        int x,y,a,b=0;
        printf("Enter the first number: ");
        scanf("%d",&x);
        printf("Enter the second number: ");
        scanf("%d",&y);
        printf("The GCD is\n");

        if (x>y){
            a=y;
        }
        else {
            a=x;
        }

        while (a<=x || a<=y){
            if (x%a==0 && y%a==0){
                if (a>b){
                    printf("%d",a);
                } 
                else{
                }
                b=a;
            }
            else{   
            }
            a--;
        }
        a=0;
        printf("The LCM is\n");
        while (a<=x || a<=y){
            if (x%a==0 && y%a==0){
                if (a>b){
                    printf("%d",b);
                } 
                else{
                }
                b=a;
            }
            else{   
            }
            a++;
        }

        return 0;
}