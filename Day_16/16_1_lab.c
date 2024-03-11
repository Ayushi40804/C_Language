#include <stdio.h>
int arr[100],x,i,Sum=0,y=0;
int AddElement(int y){
    printf("ENter the Elements:\n");
    for(i=0;i<y;i++){
        scanf("%d",&arr[i]);
        Sum=Sum+arr[i];
    }
    return Sum;
}
int main()
{
    printf("Enter the number: ");
    scanf("%d",&x);
    Sum=AddElement(x);
    printf("%d",Sum);
    return 0;
}