#include <stdio.h>
int main()
{ int *a;
  int x,i,arr[20],SUM;
  printf("Enter the number of elements in array: \n");
  scanf("%d",&x);
  printf("Enter the elememts:\n");
  for (i=0;i<x;i++)
  {
    scanf("%d",&arr[i]);
    SUM=SUM+arr[i];
  }
  a=&SUM;
  printf("The Sum of the elements of array is %d",*a);
}
