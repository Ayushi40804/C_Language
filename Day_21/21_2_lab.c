#include <stdio.h>
int main()
{
  int *a,*b,x,y,z;
  printf("Enter the first number: \n");
  scanf("%d",&x);
  printf("Enter the second number: \n");
  scanf("%d",&y);
  a=&x;
  b=&y;
//SWAP CALL BY REFERENCE
  z=*a;
  *a=*b;
  *b=z;
  printf("The first number is %d and the second number is %d",*a,*b);
}
