#include <stdio.h>
int main()
{
    int i,x,arr[500],a=0,b=0,c=0;
    printf("enter the number of digits array to be made: ");
    scanf("%d",&x);
    for (i=0 ; i<x ;i++){
        printf("Enter the digit to be enterd in the array: ");
        scanf("%d", &arr[i]);
    }
    for (i=0 ; i<x && arr[i]<arr[i+1]; i++){
        for(i=0 ; i<x ; i++){
            for (i=0 ; i<x ;){
            a=arr[i];
            b=arr[i+1];
            if (a<b){
                i++;
                }
            else{
                c=a;
                arr[i]=b;
                arr[i+1]=c;
            }        
            }
        }
    }    

    for(i=0 ; i<x ; i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}