#include <stdio.h>
int i,j,sum,R,C,arr[20][20],x;
int ELESUM (){
    printf("Enter the number of rows:\n");
    scanf("%d",&R);
    printf("Enter the number of Columns:\n");
    scanf("%d",&C);
    printf("ENter the elements of 2D array:\n");
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            scanf("%d",&arr[i][j]);
            sum=sum+arr[i][j];
        }
    }
    printf("Th esum of elements is %d",sum);
}
int main()
{
    x=ELESUM();
    return 0;
}