#include <stdio.h>
int main()
{
    int x,i,lucas=0, lucas1=1 , lucas2=3;
    printf("Enter number of Lucas' numbers to be generated: ");
    scanf("%d",&x);
    printf("The %d Lucas' numbers are as follows: \n",x);
    printf("%d\n%d\n",lucas1,lucas2);
    for (i=0 ; i<(x-2) ; i++){
        lucas=lucas1+lucas2;
        printf("%d \n",lucas);
        lucas1=lucas2;
        lucas2=lucas;
    }
    return 0;
}