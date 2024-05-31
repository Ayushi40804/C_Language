//WAP to swap the contents of two variables by using a single statement for swap.
#include <stdio.h>

int main()
{
    int a, b;
    
    // Input values
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    
    // Swapping using a single statement
    a = a ^ b ^ (b = a);
    
    // Output the swapped values
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}