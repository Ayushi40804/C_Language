#include <stdio.h>
int main()
{
    int arr[10][20],i,j,R,C;
    printf("Enter the number of units: \n");
    scanf("%d",&R);
    printf("Select the number of Columns: \n");
    scanf("%d",&C);
    printf("Enter the number in 2D array: \n");
    for (i=0 ; i<R ; i++){
        for (j=0 ; j<C ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Elements are as follows: \n");
    for (i=0 ; i<R ; i++){
        for (j=0 ; j<C ; j++){
            printf("%4d  ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}