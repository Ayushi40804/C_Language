#include <stdio.h>
int main()
{
    int arr1[10][20],arr2[10][20],arrm[10][20],i,j,k,a,b,R1,R2,C1,C2;
    printf("Enter the number of Rows: ");
    scanf("%d", &R1);
    printf("ENter the number of Columns: ");
    scanf("%d",&C1);
    printf("ENTER THE ELEMENTS OF MATRIX 1\n");
    for (i=0 ; i<R1 ; i++){
        for (j=0 ; j<C1 ; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the number of Rows: ");
    scanf("%d", &R2);
    printf("ENter the number of Columns: ");
    scanf("%d",&C2);
    printf("ENTER THE ELEMENTS OF MATRIX 2\n");
    for (i=0 ; i<R2 ; i++){
        for (j=0 ; j<C2 ; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    //CHECK FOR POSSIBILITY OF MULTICATION

    if (R1==C2){
        printf("MULTIPLICATION POSSIBLE\n");
    }
    else{
        printf("MULTIPLICATION NOT POSSIBLE\n");
        return 0;
    }
    a=R1;
    b=C2;
    //MULTIPLICATION
    for (i=0 ; i<a ; i++){
        for(j=0 ; j<b ; j++){
            arrm[i][j]=0;
            for(k=0 ; k<R2 ; k++){
                arrm[i][j]+=arr1[i][k]* arr2[k][j];
            }
        }
    }

    for(i=0 ; i<a ; i++){
        for(j=0 ; j<b ; j++){
            printf("%4d  ",arrm[i][j]);
        }
        printf("\n");
    }
    return 0;
}