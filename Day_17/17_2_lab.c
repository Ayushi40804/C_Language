#include <stdio.h>
int R,C,i,j,sumdiagonal,arr[20][20];
int SUMDIAGONAL(){
    printf("The no of rows:");
    scanf("%d",&R);
    printf("The no of Columns:");
    scanf("%d",&C);
    printf("Enter the elements of array:\n");
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            scanf("%d",&arr[i][j]);
            if(i==j){
                sumdiagonal+=arr[i][j];
            }
        }
    }
    for(i=0;i<R;i++){
        for(j=0;j<C;j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
    return sumdiagonal;
}
int main()
{
    i=SUMDIAGONAL();
    printf("The sum of the elements of main diagonal is %d",i);
    return 0;
}