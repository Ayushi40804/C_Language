//Write a program to extract last character of every word present in a sentence.
#include <stdio.h>
int main()
{
    char str[200];
    int i;
    printf ( "Enter the string: " ) ;
    gets ( str ) ;
    for ( i=0 ; str[i]!='\0'; i++ ){
        if (str[i+1]==' ' || str[i+1]=='\0'){
            printf("%c   ",str[i]);
        }
    }
    return 0;
}