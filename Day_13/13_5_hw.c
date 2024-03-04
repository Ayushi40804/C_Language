#include <stdio.h>
 	int main ()
	{
	int R,C,i,j,arr[10][20],SUM=0;
	printf("Enter the no of rows: \n");
	scanf("%d",&R);
	printf("Enter the no of columns: \n");
	scanf("%d",&C);
	printf("ENTER THE ELEMENTS OF 2_D ARRAY");
	for (i=0 ; i<R ; i++){
		for (j=0 ; j<C;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for (i=0 ; i<R;i++){
		for (j=0 ; j<C; j++){
			if (i==j){
				SUM=SUM + arr[i][j];
			}
		}
	}
	printf("The sum of the diagonals is %d",SUM);
	return 0;
}
