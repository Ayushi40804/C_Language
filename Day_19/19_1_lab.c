//to find the length of a string with/without using library function for getting length of the string
#include <stdio.h>
int main()
{
    int i;
    char str[200];
    printf("Enter the string: \n");
    gets (str);
    for(i=0; str[i];i++);
    printf("the length of the string is %d\n",i);
    return 0;
}