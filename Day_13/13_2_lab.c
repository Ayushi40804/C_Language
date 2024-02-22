#include <stdio.h>
int main()
{
    int arr1[10][20],arr2[10][20],arrs[10][20],SUM=0,i,j,R1,C1,R2,C2;
    //Create MATRIX 1
    printf("Enter the number of units: \n");
    scanf("%d",&R1);
    printf("Select the number of Columns: \n");
    scanf("%d",&C1);
    printf("Enter the number in 2D array: \n");
    for (i=0 ; i<R1 ; i++){
        for (j=0 ; j<C1 ; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    //Create MATRIX 2
    printf("------SECOND MATRIX STARTS HERE------\n");
    printf("Enter the number of units: \n");
    scanf("%d",&R2);
    printf("Select the number of Columns: \n");
    scanf("%d",&C2);
    printf("Enter the number in 2D array: \n");
    for (i=0 ; i<R2 ; i++){
        for (j=0 ; j<C2 ; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    //Print MATRIX 1
    printf("The Elements are as follows: MATRIX 1 \n");
    for (i=0 ; i<R1 ; i++){
        for (j=0 ; j<C1 ; j++){
            printf("%4d",arr1[i][j]);
        }
        printf("\n");
    }
    //Print MATRIX 2
    printf("\n\n------SECOND MATRIX STARTS HERE------\n\n");
    printf("The Elements are as follows: MATRIX 2 \n");
    for (i=0 ; i<R2 ; i++){
        for (j=0 ; j<C2 ; j++){
            printf("%4d  ", arr2[i][j]);
        }
        printf("\n");
    }
    //SUM THE TWO MATRIX
    printf("\n\n------THE SUM MATRIX------\n\n");
    for (i=0 ; i<2 ; i++ ){
        for(j=0 ; j<2 ; j++){
            arrs[i][j]=arr1[i][j] + arr2[i][j];
        }
    }
    //PRINT SUM MATRIX
    printf("The Elements are as follows: MATRIX SUM \n");
    for (i=0 ; i<R1 ; i++){
        for (j=0 ; j<C1 ; j++){
            printf("%4d  ", arrs[i][j]);
        }
        printf("\n");
    }
    return 0;
}