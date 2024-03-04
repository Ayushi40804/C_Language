#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("\nEnter how many numbers :");
    scanf("%d",&n);
    printf("\nEnter the value of %d Numbers",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    /*BUBBLE SORT technique*/
    for(i=1;i<=n-1;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }  
        }
    }
    printf("\nThe Numbers in ascending order are\n ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}