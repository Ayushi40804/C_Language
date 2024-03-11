#include <stdio.h>
int i,j,arr[20][20],large,small,C,R,x,y;
int LARGEST(int R,int C){
    large=arr[0][0];
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            if (large<=arr[i][j]){
            large=arr[i][j];
            }
        }
        
    }
    return large;
}
int SMALLEST(int R, int C){
    small=arr[0][0];
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            if (small>=arr[i][j]){
            small=arr[i][j];
            }
        }
    }
    return small;
}
int main()
{
    printf("The no of rows:");
    scanf("%d",&R);
    printf("The no of Columns:");
    scanf("%d",&C);
    printf("Enter the elements of array:\n");
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    x=LARGEST(R,C);
    y=SMALLEST(R,C);
    printf("The largest number is %d\n",x);
    printf("The smallest number is %d",y);
    return 0;
}