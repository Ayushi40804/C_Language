#include <stdio.h>
void INPUT_MATRIX (int [][20], int ,int );
int CHECK_NULL (int, int);
int PRINT_MATRIX (int [][20], int ,int );
void MULTIPLICATION_MATRIX (int [][20],int [][20],int [][20],int , int ,int);
int main()
{
    int A1[20][20],A2[20][20],A3[20][20],R1,R2,C1,C2,k;

    printf("Enter the no of rows and columns of Matrix 1:\n");
    scanf("%d %d",&R1,&C2);
    printf("Enter the no of rows and columns of Matrix 2:\n");
    scanf("%d %d",&R2,&C2);
    k= CHECK_NULL(C1,R2);
    if (k != 0) {
        printf("Matrix Multiplication possible\n\n");
        printf("ENTER MATRIX 1");
        INPUT_MATRIX(A1, R1, C1);
        printf("PRINT MATRIX 1");
        PRINT_MATRIX(A1, R1, C1);
        printf("ENTER MATRIX 2");
        INPUT_MATRIX(A2, R2, C2);
        printf("PRINT MATRIX 2");
        PRINT_MATRIX(A2, R2, C2);

        MULTIPLICATION_MATRIX(A1, A2, A3 , R1, C2, C1);
        PRINT_MATRIX(A3, R1, C2);
    } else {
        printf("Matrix Multiplication not possible\n");
    }

    return 0;
}
void INPUT_MATRIX (int A[20][20],int R ,int C ){
    int i,j;
    for (i=0;i<R;i++){
        for(j=0;j<C;j++){
            scanf("%d", &A[i][j]);
        }
    }
}
int CHECK_NULL(int C1,int R2){
    if (C1!=R2){
        return 1;
    }
    else{
        return 0;
    }
}

void MULTIPLICATION_MATRIX (int M[20][20],int N[20][20],int J[20][20] , int p, int q , int r){
    int i ,j,k,sum;
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            J[i][j] = 0;
            for (k=0 ; k<r;k++){
                J[i][j]=J[i][j]+M[i][k]*N[k][j];
            }
        }
    }
}
int PRINT_MATRIX (int J[20][20],int p,int q){
    int i,j;
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            printf("%d", J[i][j]);
        }
        printf("\n");
    }
}